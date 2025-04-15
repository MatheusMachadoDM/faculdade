using API.Models;
using Microsoft.AspNetCore.Mvc; //precisa para realizar o return na linha 16
using Microsoft.EntityFrameworkCore;

var builder = WebApplication.CreateBuilder(args);
builder.services.adddbcontext<DbDataContext>();

var app = builder.Build();

//Não necessário mais
/*
List<Carro> carros = [
    new Carro{Id = 1, Name = "Fusca",},
    new Carro{Id = 2, Name= "Ferrari"}
];*/

//Exemplo de requisição
//app.MapGet("/", () => "Hello World!");

//GET: api/carros
app.MapGet("/api/carros", ([FromServices] AppDataContext ctx) => {
    if(ctx.Carros.any()){
        return Results.Ok(ctx.Carros.ToList());
    }

    return Results.NotFound();
});

app.MapPost("/",    ([FromBody] Carro carro.[FromServices] AppDataContext ctx) =>{
                        if(ctx.Carros.Any(){
                            ctx.Carros.Add(carro);
                            ctx.SaveChanges();
                
                        }
                        return Results.NotFound();
                        )
});

app.Run();
