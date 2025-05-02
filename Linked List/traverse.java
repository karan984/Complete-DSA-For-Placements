class Node{
    int data;
    Node next;

    Node(int x){
        data=x;
        next=null;
    }
}

public class traverse{
    static Node insertAtBegin(Node head, int x){
        Node temp = new Node(x);

        if(head==null){
            head=temp;
        }else{
            temp.next=head;
            head=temp;
        }

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
        traverse(head);
    }
}