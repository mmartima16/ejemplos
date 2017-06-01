//Proyectos SERVLET


	protected void doGet(HttpServletRequest request, HttpServletResponse response)
		throws ServletException, IOException{
		HttpSession misession = (HttpSession)request.getSession();

	if (misession.getAttribute("idUsuario") != null) {

		Proyecto p = request.getAttribute("proyectoAMostrar")[request.getAttribute("nombreProyecto")];

		request.getRequestDispatcher("proyectos.jsp").forward(request, response);
	}
	else {
		misession.invalidate();
		response.sendRedirect("login");
	}
	}

		protected void doPost(HttpServletRequest request, HttpServletResponse response)
		throws ServletException, IOException{

		doGet(request, response);
	}

}
//---------------------------------------------------------------------------------//
//Pagina Principal JSP

	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException{
	HttpSession misession = (HttpSession)request.getSession();

			if (misession.getAttribute("idUsuario") != null) {

	Tarea[] listaTareasA = { new Tarea("TareaA", "Brainstorm", "Pepe C."),
		new Tarea("TareaB", "Entrega AI", "Luisa G.") };
	Tarea[] listaTareasB = { new Tarea("TareaA", "Brainstorm", "Luisa G."),
		new Tarea("TareaB", "Entregas", "Pepe C.") };
	Tarea[] listaTareasC = { new Tarea("TareaA", "Entrega AI", "Pepe C."),
		new Tarea("TareaB", "Brainstorm", "Luisa G.") };

	Map<String,Proyecto> listaProyectos;
	listaProyectos.Add("ProyectoRicardoA", new Proyecto("ProyectoRicardoA", 4, "app bancaria", "15/7/2017", true, null);
	listaProyectos.Add("ProyectoRicardoB", new Proyecto("ProyectoRicardoB", 2, "game", "15/7/2017", true, null);
	listaProyectos.Add("ProyectoRicardoC", new Proyecto("ProyectoRicardoC", 3, "app empresa", "15/7/2017", true, null);
	listaProyectos.Add("ProyectoRicardoD", new Proyecto("ProyectoRicardoD", 1, "app empresa", "15/7/2017", false, null);
	listaProyectos.Add("ProyectoRicardoE", new Proyecto("ProyectoRicardoE", 1, "app empresa", "15/7/2017", false, null);


	request.setAttribute("proyectoAMostrar", listaProyectos);

	request.getRequestDispatcher("proyectos.jsp").forward(request, response);
}
else {
	misession.invalidate();
	response.sendRedirect("login");
}
}


protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException{
	doGet(request, response);
}

}

