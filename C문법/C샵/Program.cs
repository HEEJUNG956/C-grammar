using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

// 확인
namespace C샵
{
    internal class Program
    {
        struct Person
        {
            public string name;
            public int age;
            public string job;
            public bool school;
            public string city;
            public string country;
            public bool adult;
            public bool marry;
        }
        static void SWAP(ref int a, ref int b)
        {
            int temp = a;
            a = b;
            b = temp;
        }

        static void Change(ref string a, ref string b)
        {
            string temp = a;
            a = b;
            b = temp;
        }

        static bool Adult(int a)
        {
            if(a > 19)
                return true;
            else
                return false;
        }

        static string Marry(bool temp)
        {
            if(temp == true)
            {
                return "yes";
            }
            else
                return "no";
        }

        static void Main(string[] args)
        {
            int a = 100;
            int b = 200;
            SWAP(ref a, ref b);
            Console.WriteLine("a = " + a);
            Console.WriteLine("b = " + b);
            Console.WriteLine("==============================================================");
            Person p1 = new Person();
            p1.name = "정";
            p1.age = 20;
            p1.job = "학생";
            p1.school = true;
            p1.city = "대한민국";
            p1.country = "서울";
            p1.adult = Adult(p1.age);
            p1.marry = true;

            Change(ref p1.city, ref p1.country);
            

            Console.WriteLine("이름 : " + p1.name);
            Console.WriteLine("나이 : " + p1.age);
            Console.WriteLine("직업 : " + p1.job);
            Console.WriteLine("졸업여부 : " + p1.school);
            Console.WriteLine("도시 : " + p1.city);
            Console.WriteLine("국적 : " + p1.country );
            Console.WriteLine("성인여부 : " + p1.adult);
            Console.WriteLine("결혼여부 : " + Marry(p1.marry) + "\n");


            p1.name = "이";
            p1.age = 19;
            p1.job = "학생";
            p1.school = false;
            p1.country = "독일";
            p1.city = "대전";
            p1.adult = Adult(p1.age);
            p1.marry = false;

            Console.WriteLine("이름 : " + p1.name);
            Console.WriteLine("나이 : " + p1.age);
            Console.WriteLine("직업 : " + p1.job);
            Console.WriteLine("졸업여부 : " + p1.school);
            Console.WriteLine("도시 : " + p1.city);
            Console.WriteLine("국적 : " + p1.country);
            Console.WriteLine("성인여부 : " + p1.adult);
            Console.WriteLine("결혼여부 : " + Marry(p1.marry) + "\n");
        }
    }
}
