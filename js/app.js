var array=[29,43,32,89,54,34,90,23,24,43];    //an array storing ten elements

var max=0;
 
for(var i=0; i<array.length; i++){
    if(array[i] > max){
        max=array[i];
    }
}
console.log(max);