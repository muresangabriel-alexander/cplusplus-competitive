const fin='cmmdc.in';fout='cmmdc.out';
var f:text;
    a:array[1..1000000]of longint;
    n,k,i,j,max,nr:longint;
begin
  assign(f,fin);reset(f);
  readln(f,n,k);
  for i:=1 to n do
  begin
    read(f,j);
    inc(a[j]);
    if max<j then max:=j;
  end;
  close(f);
  for i:=max downto 1 do
  begin
    nr:=0;
    j:=max div i *i;
    while j>=i do begin
      inc(nr,a[j]);
      dec(j,i)
    end;
    if nr>=k then break
  end;
  assign(f,fout);rewrite(f);
  writeln(f,i);
  j:=max div i *i;
  while k>0 do begin
      while a[j]=0 do dec(j,i);
      write(f,j,' ');dec(k);dec(a[j])
  end;
  close(f);

end.
