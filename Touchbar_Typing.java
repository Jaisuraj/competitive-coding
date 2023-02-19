
import java.util.*;
    public static void main(String[] agrs)
    {
        Scanner sc=new Scanner(System.in);
        int testCase=sc.nextInt();
        for(int test=1;test<=testCase;test++){
            int n=sc.nextInt();
            int[] str=new int[n];
            for(int i=0;i<n;i++)
                str[i]=sc.nextInt();
            int m=sc.nextInt();
            int[] keyboard=new int[m];
            for(int i=0;i<m;i++)
                keyboard[i]=sc.nextInt();
        Map<Integer,Integer> hm=new HashMap<Integer,Integer>();
        for(int i=0;i<m;i++){
            hm.put(keyboard[i],i);
        }
        int ans=0;
        int cur=hm.get(str[0]);
        for(int i=1;i<n;i++){
            int x=hm.get(str[i]);
            ans+=Math.abs(cur-x);
            cur=x;
        }
            System.out.println("Case #"+test+": "+ans);
        }
    }
