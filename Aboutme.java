public class Aboutme{

public class Me{
            String name="";
            String age="";
            String Phn_no="";
            String birth_place="";
            
            public void setMe(String name,String age,String Phn_no,String birth_place){

                               this.name=name;
                               this.age=age;
                               this.Phn_no=Phn_no;
                               this.birth_place=birth_place;
                                   }
            public void giveMe(){
                                System.out.println("hi My name is"+name+". I am "+age+" years old. I am from "+birth_place+". My contact no is"+Phn_no);
                                }
               }
           public static void main(String[] args){
                                                 System.out.println("Is this your actual data?");
                                                 giveMe();
                                                 
                                                  }
}