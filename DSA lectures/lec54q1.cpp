class Twostack {
    int *arr;
    int top1;
    int top2;
    int size;

    public:
      // Intialize Twostack
      Twostack(int s){
        this -> size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
      }

      // Push in Stack 1
      void push1(int num){
        //atleast a empty sapce present
        if(top2 - top1 > 1){
            top++;
            arr[top1] = num;
        }
      }

      // Push in Stack 2
      void push2(int = num){
        if(top2 - top1 > 1){
            top2--;
            arr[top2] = num;
        }
      }

      // Pop from stack 1 and return popped element
      int pop1() {
        if(top >= 0){
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else{
            return = -1;
        }
      }

      // Pop from Stack 2 and return popped element
      int pop2() {
        if(top2 < size){
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else{
            return = -1;
        }
      }
};