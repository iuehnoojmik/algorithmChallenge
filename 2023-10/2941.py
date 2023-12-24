str = input();

count = len(str);

count -= str.count("c=");
count -= str.count("c-");
count -= str.count("dz=");
count -= str.count("d-");
count -= str.count("lj");
count -= str.count("nj");
count -= str.count("s=");
count -= str.count("z=");

print(count);