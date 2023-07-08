public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        // ListNode temp1=headA;
        // ListNode temp2=headB;
        // while(temp1!=temp2){
        //     if(temp1==null){
        //         temp1=headB;
        //     }else{
        //         temp1=temp1.next;
        //     }
        //     if(temp2==null){
        //         temp2=headA;
        //     }else{
        //         temp2=temp2.next;
        //     }
        // }
        // return temp1;
        Set<ListNode> hs=new HashSet<>();
        while(headA!=null ){
            hs.add(headA);
                headA=headA.next;
            }
         while(headB!=null){
             if(hs.contains(headB))
             return headB;
             headB=headB.next;
         }   

        return null;
    }
}
