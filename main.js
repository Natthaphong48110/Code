                //if test

/*
let score = 80;

if (score >=80) {
  console.log('Grade A');         
}
else if (score >=70) {
  console.log('Grade B');
}
else console.log('Grade F')

*/

                //for test


/*
for (let x =1; x <=12; x = x+1) {      
  console.log(x);
}

for (let x =1; x <=12; x = x+1) {
  let answer = x**2
  console.log(answer)
}

*/

            //เครื่องหมาย
/*
  +,
  -, 
  *, 
  /, 
  **2(ยกกำลัง2), 
  %2(หารแล้วได้เศษ2),
  ==(=คนละประเภทข้อมูลก็เท่ากับกันได้แค่ข้างในเท่ากัน), 
  === (=ทุกอย่างต้องเหมือนกัน), 
  != ,
  !==(ไม่เท่ากับ), 
  x +=5 (x+5 ไปเรื่อย เหมือน x = x+5)
*/


             //Function test
/*
let length = 2;
let width = 2;
let height = 3;
let basearea = length * width;
let pyramidvolume = 1/3 * basearea * height;
console.log(pyramidvolume);
*/

/*
function getpyramidarea(length, width, height) {
  let basearea = length * width;
  let pyramidvolume = 1/3 * basearea * height;
  console.log(pyramidvolume);
}

getpyramidarea(2,2,3);
getpyramidarea(5,2,9);    //ตาม()ตรงfunction
getpyramidarea(5,5,5);

*/

        //ตัวอย่าง2
/*
function getpyramidarea(length, width, height) {
  let basearea = length * width;
  let pyramidvolume = 1/3 * basearea * height;
  return pyramidvolume;
}
let area1 = getpyramidarea(2,2,3);
let area2 = getpyramidarea(4,4,3);
console.log('Area 1 =' + area1 + ', Area 2 =' + area2);
*/

      //การควบคุมid html  **ต้องใส่id ให้divนั้น** ตัวอย่างid=content2
/*
let content2 = document.getElementById('content2');
let texthtml = '<p>Hello</p>';
content2.innerHTML = texthtml;
(มีอีกอันนึง = content2.addEvenListener () ใช้กับปุ่มได้)
*/

/*
alert('Website');
let name = prompt('Typing Your name'); //ตัวกรอกข้อมูล
console.log(name);
*/

/*
console.log(Math.floor(Math.random() *100) ) //สุ่มเลข math.floor=ปัดเศษลง
*/

/*
console.log(String('Hello'))
console.log(Number(10))
*/

