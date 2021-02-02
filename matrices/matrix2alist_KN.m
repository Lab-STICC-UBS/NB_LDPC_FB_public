% matrix2alist_KN
% matrix to alisk with KN format

clear all;
clc;

load matrix.mat;

fileID =fopen('alist_KN.txt','w');
fclose(fileID);

H=matrix;

H_bin = H;
H_bin( H > -1 ) = 1;
H_bin( H<0 ) = 0;


[M,N] = size(H);
dc = sum(H_bin,2);
dv = sum(H_bin,1);
dcmax = max(dc);
dvmax = max(dv);

[nlist,~] = find(H_bin);
[mlist,~] = find(H_bin');

GF=64;

%write in a file named alist_KN.txt
     fileID =fopen('alist_KN.txt','at');    
      fprintf(fileID,'%d %d %d \n ',N,M,GF);
    for i=1:N
        fprintf(fileID,'%d ',dv(i));
    end
    fprintf(fileID,' \n ');
    for i=1:M
        fprintf(fileID,'%d ',dc(i));
    end
    fprintf(fileID,' \n ');
    
    k=0;
    for i=1:M
        for j=1:dc(i)
            fprintf(fileID,'%d ',mlist(k + j ));
            fprintf(fileID,'%d ',H( i, mlist(k + j  )));
        end
        k=k+dc(i);
        fprintf(fileID,' \n ');
    end

    
      fclose(fileID);  