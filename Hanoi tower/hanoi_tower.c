int conf[HEIGHT] /*Element conf[d] gives the current position of disk d*/

void move(int d, int t){  
    conf[d] = t;
}

void hanoi(int h, int t){
    if(h>0){
        int f = conf[h-1];
        if(f!=t){
          int r=3-f-t;
          hanoi(h-1,r);
          move(h-1,t);
        
        }
        hanoi(h-1,t);
        }
