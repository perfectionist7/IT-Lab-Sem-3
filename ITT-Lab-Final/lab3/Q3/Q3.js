var phone = document.getElementById("Q3").value;
function get()
{
    var phoneno=document.getElementById("Q3").value;
    var a=phoneno.split(")");
    var areacode = a[0].substring(1,a[0].length);
    var b = a[1].split("-");
    var phon = b[0] + b[1];
    document.getElementById("area-code").value = areacode;
    document.getElementById("phone-no").value = phon;
}