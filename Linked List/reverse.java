class Node{
    int data;
    Node next;

    Node(int x){
        data=x;
        next=null;
    }
}

public class reverse{
    static Node insertAtBegin(Node head, int x){
        Node temp = new Node(x);

        temp.next=head;
        head=temp;

        return head;
    }
    
    
    static void traverse(Node head){
        Node temp = head;
        while(temp!=null){
            System.out.print(temp.data+" ");
            temp=temp.next;
        }
        System.out.println();
    }
    static Node reverse(Node head){
        Node prev = null;
        Node curr=head;
        Node next = null;

        while(curr!=null){
            next=curr.next;
            curr.next=prev;
            prev=curr;
            curr=next;
        }
        head=prev;
        return head;
    }
    public static void main(String []args){
        Node head = null;

        head=insertAtBegin(head, 10);
        head=insertAtBegin(head, 20);
        head=insertAtBegin(head, 30);
        head=insertAtBegin(head, 40);
        head=insertAtBegin(head, 50);
        head=insertAtBegin(head, 60);
        head=insertAtBegin(head, 70);

        traverse(head);

        head = reverse(head);

        traverse(head);
        
    }
}