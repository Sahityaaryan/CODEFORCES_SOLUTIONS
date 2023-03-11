let b=prompt();
for(let k= Number.parseInt(b) + 1;k<9000;k++){
  let a= String(k);let count=0;
  for(let i=0;i<a.length;i++){
    for(let k=0;k<a.length;k++){
      if(i!=k && a[i]==a[k]){count++;}
    }    
  }
  if(count==0){console.log(a);break;}
  else{continue;}
}
///it works on every online compiler but not on codeforces
// not  on vscode why?