/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package j.astar;

/**
 *
 * @author liumiao
 */
//public class JAStar {

    /**
     * @param args the command line arguments
     */
   // public static void main(String[] args) {
  //      // TODO code application logic here
    //}
//}

public class JAStar {
    
    public static void main(String[] args){
        int[][] map=new int[][]{// 地图数组
                {1,1,1,1,1,1,1,1,1,1},
                {1,1,1,1,0,1,1,1,1,1},
                {1,1,1,1,0,1,1,1,1,1},
                {1,1,1,1,0,1,1,1,1,1},
                {1,1,1,1,0,1,1,1,1,1},
                {1,1,1,1,0,1,1,1,1,1}
        };
        AStar aStar=new AStar(map, 6, 10);
        int flag=aStar.search(4, 0, 3, 8);
        if(flag==-1){
            System.out.println("传输数据有误！");
        }else if(flag==0){
            System.out.println("没找到！");
        }else{
            for(int x=0;x<6;x++){
                for(int y=0;y<10;y++){
                    if(map[x][y]==1){
                        System.out.print("　");
                    }else if(map[x][y]==0){
                        System.out.print("〓");
                    }else if(map[x][y]==-1){
                        System.out.print("※");
                    }
                }
                System.out.println();
            }
        }
    }
}



