var personmap = new Map([]);//declare a new map.

var personArr = //array to hold our names..
    [
        'john',
        'indigo',
        'Windego',
        'Charlotte'
    ];

var keyArr = 
[
    1,
    2,
    3,
    4
]

let createArr = (passedKeysArr, passedPersonArr)=>
{
    for(i in passedPersonArr)
    {
        //for each element [i] in the passed array..assign that number a name, this can be done without templates.
        personmap[passedKeysArr[i]] =  `${passedPersonArr[i]}`;

        //Alternatively, we can dynamically combine arrays into a map without templates,
        //will show a => instead of a : between key and value pairs due to a comma, instead of an  =
        personmap.set(passedKeysArr[i] , passedPersonArr[i]);
    }
    return personmap;//returns the personmap map with all items added to it.
}

var testMap= createArr(keyArr, personArr); //stores the returned elements in a variable.

console.log(testMap);// logs the created map

/*--------------------BONUS CODE------------------*/

///template test
let testfunc = (whitespace ,...test) =>{
   var testTemp= test; //temp var storing the value of the passed ...test
   console.log(testTemp);//logs: 'jenny','jessica', 45,78
   console.log(whitespace);//logs: '','','','',''
   return testTemp//returns what was logged above.
}

//spread(...) test
let calcLength = (...passedValues)=>
{
    console.log(Math.max(...passedValues));//logs 78(max) Notice the spreader? (...)
    console.log(passedValues);//Logs ['53','45','78']
}

calcLength(`${5}${3}`,`${45}`,`${78}`);//get the max number of the given template #'s, note the 5 and 3 make 53, since there is no comma.
testfunc`${"jenny"}${"jessica"}${45}${78}`;//d

/*-----------MORE BONUS CODE!------------*/

//The below for loop can easily cycle through elements in a map, or array. 
//I is the variable, and c is the create map/array/list

/*for(i in c)
{
    console.log(c[i]);
}*/
