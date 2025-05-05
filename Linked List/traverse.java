class Node{
    int data;
    Node next;

    Node(int x){
        data=x;
        next=null;
    }
}

public class traverse{
    static Node insertAtPos(Node head, int x, int pos){
        if(pos==1){
            head=insertAtBegin(head, x);
            return head;
        }

        Node temp = new Node(x);
        Node t = head;

        for(int i=1; i<=pos-2; i++){
            t=t.next;
            if(t==null){
                break;
            }
        }

        if(t==null){
            System.out.println("Invalid Position");
            return head;
        }

        temp.next=t.next;
        t.next=temp;

        return head;
    }
    static Node insertAtBegin(Node head, int x){
        Node temp = new Node(x);

        temp.next=head;
        head=temp;

        return head;
    }
    static Node insertAtEnd(Node head, int x){
        Node temp = new Node(x);
        Node t = head;

        if(head==null){
            head=temp;
        }else{
            while(t.next!=null){
                t=t.next;
            }
            t.next=temp;
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
        
        head = insertAtEnd(head, 80);
        head = insertAtEnd(head, 90);
        head = insertAtEnd(head, 100);

        traverse(head);

        head = insertAtPos(head, 200, 5);
        traverse(head);
        head = insertAtPos(head, 300, 6);
        traverse(head);
        head = insertAtPos(head, 400, 1);
        traverse(head);
        head = insertAtPos(head, 500, 15);
        traverse(head);
        
    }
}