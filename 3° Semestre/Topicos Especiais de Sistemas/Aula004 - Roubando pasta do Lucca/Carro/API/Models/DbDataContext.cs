using System;
using Microsoft.EntityFrameworkCore;
using API.Models;

public class AppDataContext : DbContext{
    public DbSet<Carro> Carros{ get; set; }

    protected override void OnConfiguring(DbContextOptionsBuilder optionsBuilder){
        optionsBuilder.UseSqlite("Data Source = CarrosDb.db");
    }
}