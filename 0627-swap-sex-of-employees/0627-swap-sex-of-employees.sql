# Write your MySQL query statement below
Update Salary Set sex = 
Case sex
    when 'm' then 'f'
    else 'm'
end;