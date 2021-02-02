% alist2matrix_nb.m
% author: Cédric Marchand
% convert a alist format file to Non-Binary parity matrix , output in a text file

% in the consedered alist, first the location are givens
% then the GF symbol values

clear all;
clc;




fileID =fopen('alist.txt');


N = fscanf(fileID,'%d',1);
M = fscanf(fileID,'%d',1);
GF = fscanf(fileID,'%d',1);


dc=zeros(1,M);
dv=zeros(1,N);

matrix=zeros(M,N);
matrix=matrix-1;

matrix_location = zeros(M,dc);
matrix_symbol = zeros(M,dc);

for i=1:N
   dv(i) = fscanf(fileID,'%d',1); 
end

for i=1:M
   dc(i) = fscanf(fileID,'%d',1); 
end

for i=1:M
    for j=1:dc(i)
       matrix_location(i,j) = fscanf(fileID,'%d',1);
    end
end


for i=1:M
    for j=1:dc(i)
        matrix_symbol(i,j) = fscanf(fileID,'%d',1);
    end
end


for i=1:M
    for j=1:dc(i)
        matrix(i,matrix_location(i,j)+1) = matrix_symbol(i,j);
    end
end




fclose(fileID);



save matrix.mat matrix