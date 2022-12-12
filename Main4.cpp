
glVertex2f(-0.44f, 0.16f); // x, y
glVertex2f(-0.44f, 0.205f);
glVertex2f(-0.423f, 0.205f); // x, y
glVertex2f(-0.423f, 0.16f);



glEnd();



glBegin(GL_QUADS); // Each set ofbulding last 1st window
glColor3ub(255, 255, 255 );
// Red



glVertex2f(-0.385f, 0.16f); // x, y
glVertex2f(-0.385f, 0.205f);
glVertex2f(-0.36f, 0.205f); // x, y
glVertex2f(-0.36f, 0.16f);



glEnd();
glBegin(GL_QUADS); // Each set ofbulding last 1st window glass
glColor3ub(153, 102, 255 );
// Red



glVertex2f(-0.38f, 0.165f); // x, y
glVertex2f(-0.38f, 0.20f);
glVertex2f(-0.365f, 0.20f); // x, y
glVertex2f(-0.365f, 0.165f);



glEnd();
glBegin(GL_QUADS); // Each set ofbulding last 2nd window
glColor3ub(255, 255, 255 );
// Red



glVertex2f(-0.385f, 0.285f); // x, y
glVertex2f(-0.385f, 0.335f);
glVertex2f(-0.36f, 0.335f); // x, y
glVertex2f(-0.36f, 0.285f);



glEnd();
glBegin(GL_QUADS); // Each set ofbulding last 2nd window glass
glColor3ub(153, 102, 255 );
// Red



glVertex2f(-0.38f, 0.290f); // x, y
glVertex2f(-0.38f, 0.33f);
glVertex2f(-0.365f, 0.33f); // x, y
glVertex2f(-0.365f, 0.290f);



glEnd();
glBegin(GL_QUADS); // Each set ofbulding last 3rd window
glColor3ub(255, 255, 255 );
// Red



glVertex2f(-0.385f, 0.429f); // x, y
glVertex2f(-0.385f, 0.473f);
glVertex2f(-0.36f, 0.473f); // x, y
glVertex2f(-0.36f, 0.429f);



glEnd();
glBegin(GL_QUADS); // Each set ofbulding last 3rd window glass
glColor3ub(153, 102, 255 );
// Red



glVertex2f(-0.38f, 0.434f); // x, y
glVertex2f(-0.38f, 0.468f);
glVertex2f(-0.365f, 0.468f); // x, y
glVertex2f(-0.365f, 0.434f);



glEnd();




glBegin(GL_QUADS); // Each set ofbulding door
glColor3ub(255, 255, 255 );
// Red



glVertex2f(-0.325f, 0.1f); // x, y
glVertex2f(-0.325f, 0.22f);
glVertex2f(-0.29f, 0.22f); // x, y
glVertex2f(-0.29f, 0.1f);



glEnd();



glBegin(GL_QUADS); // Each set ofbulding door glass
glColor3ub(86, 101, 115 );
// Red



glVertex2f(-0.32f, 0.115f); // x, y
glVertex2f(-0.32f, 0.142f);
glVertex2f(-0.31f, 0.142f); // x, y
glVertex2f(-0.31f, 0.115f);



glEnd();
glBegin(GL_QUADS); // Each set ofbulding door glass
glColor3ub(86, 101, 115 );
// Red



glVertex2f(-0.305f, 0.115f); // x, y
glVertex2f(-0.305f, 0.142f);
glVertex2f(-0.295f, 0.142f); // x, y
glVertex2f(-0.295f, 0.115f);



glEnd();



glBegin(GL_QUADS); // Each set ofbulding door glass
glColor3ub(86, 101, 115 );
// Red



glVertex2f(-0.32f, 0.155f); // x, y
glVertex2f(-0.32f, 0.185f);
glVertex2f(-0.31f, 0.185f); // x, y
glVertex2f(-0.31f, 0.155f);



glEnd();
glBegin(GL_QUADS); // Each set ofbulding door glass
glColor3ub(86, 101, 115 );
// Red



glVertex2f(-0.305f, 0.155f); // x, y
glVertex2f(-0.305f, 0.185f);
glVertex2f(-0.295f, 0.185f); // x, y
glVertex2f(-0.295f, 0.155f);



glEnd();




glBegin(GL_QUADS); // Each set ofbulding door road
glColor3ub(189, 189, 189 );
// Red



glVertex2f(-0.33f, 0.1f); // x, y
glVertex2f(-0.33f, 0.02f);
glVertex2f(-0.285f, 0.02f); // x, y
glVertex2f(-0.285f, 0.1f);
glEnd();

    //road for car // x, y
glBegin(GL_QUADS);              // Each set ofcar fark form a quad
	glColor3ub(189, 189, 189  );
	// Red

	glVertex2f(-0.266f, 0.0f);
	glVertex2f(-0.266f, 0.19f);
	glVertex2f(-0.21f, 0.19f);    // x, y
	glVertex2f(-0.21f, 0.0f);

	glEnd();

glBegin(GL_QUADS);              // Each set ofcar fark form a quad
	glColor3ub(255, 255, 255  );
	// Red

	glVertex2f(-0.265f, 0.12f);   //road for car // x, y
	glVertex2f(-0.255f, 0.15f);
	glVertex2f(-0.228f, 0.15f);    // x, y
	glVertex2f(-0.218f, 0.12f);

	glEnd();
	///////
	glBegin(GL_QUADS);              // Each set ofcar fark form a quad
	glColor3ub(0, 0, 255  );
	// Red

	glVertex2f(-0.255f, 0.15f);   //road for car // x, y
	glVertex2f(-0.228f, 0.15f);    // x, y
	glVertex2f(-0.228f, 0.16f);
	glVertex2f(-0.255f, 0.16f);

	glEnd();
	////

glBegin(GL_QUADS);              // Each set ofcar fark form a quad
	glColor3ub(0, 0, 255  );
	// Red

	glVertex2f(-0.265f, 0.1f);   //road for car // x, y
	glVertex2f(-0.265f, 0.13f);
	glVertex2f(-0.218f, 0.13f);    // x, y
	glVertex2f(-0.218f, 0.1f);
	glEnd();
	glBegin(GL_QUADS);
glColor3ub(255, 238, 88  );
	// Red

	glVertex2f(-0.262f, 0.109f);   //road for car light // x, y
	glVertex2f(-0.262f, 0.125f);
	glVertex2f(-0.253f, 0.125f);    // x, y
	glVertex2f(-0.253f, 0.109f);

	glEnd();
	glBegin(GL_QUADS);
glColor3ub(255, 238, 88  );
	// Red

	glVertex2f(-0.23f, 0.109f);   //road for car light // x, y
	glVertex2f(-0.23f, 0.125f);
	glVertex2f(-0.221f, 0.125f);    // x, y
	glVertex2f(-0.221f, 0.109f);

	glEnd();

	glLineWidth(3.5);
	glBegin(GL_LINES);             // Each set of 4 vertices form a quad
	glColor3ub(0, 0, 0 ); // Red
glVertex2f(-0.261f, 0.095f);    // x, y
glVertex2f(-0.253f, 0.095f);
glVertex2f(-0.233f, 0.095f);    // x, y
glVertex2f(-0.225f, 0.095f);
	glEnd();

/////Hospital

glBegin(GL_QUADS);              // Each set of building body
	glColor3ub(255, 255, 255 );
	// Red

	glVertex2f(-0.18f, 0.1f);    // x, y
	glVertex2f(-0.18f, 0.46f);
	glVertex2f(-0.02f, 0.46f);    // x, y
	glVertex2f(-0.02f, 0.1f);

	glEnd();
glBegin(GL_QUADS);              // Each set of building body er upor side
	glColor3ub(255, 255, 255 );
	// Red

	glVertex2f(-0.195f, 0.46f);    // x, y
	glVertex2f(-0.195f, 0.53f);
	glVertex2f(-0.02f, 0.53f);    // x, y
	glVertex2f(-0.02f, 0.46f);

	glEnd();

	glLineWidth(7.5);
	glBegin(GL_LINES);
	glColor3ub(186, 104, 200  );
	glVertex2f(-0.21f, 0.54f);
	glVertex2f(-0.01f, 0.54f);



	glEnd();
	glBegin(GL_QUADS);              // Each set of building body left glass body
	glColor3ub(79, 195, 247  );
	// Red

	glVertex2f(-0.18f, 0.1f);    // x, y
	glVertex2f(-0.18f, 0.46f);
	glVertex2f(-0.14f, 0.46f);    // x, y
	glVertex2f(-0.14f, 0.1f);

	glEnd();
glBegin(GL_QUADS);              // Each set of building body right glass body
	glColor3ub(79, 195, 247  );
	// Red

	glVertex2f(-0.10f, 0.1f);    // x, y
	glVertex2f(-0.10f, 0.46f);
	glVertex2f(-0.02f, 0.46f);    // x, y
	glVertex2f(-0.02f, 0.1f);

	glEnd();
	glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(93, 109, 126     );//left glass body line
	glVertex2f(-0.18f, 0.17f);
	glVertex2f(-0.14f, 0.17f);

glVertex2f(-0.18f, 0.24f);
	glVertex2f(-0.14f, 0.24f);

	glVertex2f(-0.18f, 0.31f);
	glVertex2f(-0.14f, 0.31f);
	glVertex2f(-0.18f, 0.38f);
	glVertex2f(-0.14f, 0.38f);

	glEnd();

	glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255     );//right glass body
	glVertex2f(-0.10f, 0.17f);
	glVertex2f(-0.02f, 0.17f);

glVertex2f(-0.10f, 0.24f);
	glVertex2f(-0.02f, 0.24f);

	glVertex2f(-0.10f, 0.31f);
	glVertex2f(-0.02f, 0.31f);
	glVertex2f(-0.10f, 0.38f);
	glVertex2f(-0.02f, 0.38f);


	glVertex2f(-0.045f, 0.46f);
	glVertex2f(-0.045f, 0.17f);
	glVertex2f(-0.075f, 0.46f);
	glVertex2f(-0.075f, 0.17f);

	glEnd();

	glLineWidth(4.0);//door
	glBegin(GL_LINES);
	glColor3ub(44, 62, 80     );
	glVertex2f(-0.085f, 0.17f);
	glVertex2f(-0.035f, 0.17f);

	glEnd();
	glLineWidth(4.5);
	glBegin(GL_LINES);//door
	glColor3ub(40, 53, 147    );
	glVertex2f(-0.081f, 0.165f);
	glVertex2f(-0.081f, 0.1f);

	glVertex2f(-0.039f, 0.165f);
	glVertex2f(-0.039f, 0.1f);

	glEnd();
glLineWidth(2.5);
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0    );//door


	glVertex2f(-0.06f, 0.165f);
	glVertex2f(-0.06f, 0.1f);

	glEnd();
	glBegin(GL_QUADS);              // Each set of building form a quad
	glColor3ub(189, 189, 189  );
	// Red

	glVertex2f(-0.095f, 0.1f); // building door road   // x, y
	glVertex2f(-0.095f, 0.02f);
	glVertex2f(-0.02f, 0.02f);    // x, y
	glVertex2f(-0.02f, 0.1f);

	glEnd();
}


void chair(){      ////chair

    glBegin(GL_POLYGON);              // Each set of building form a quad
	glColor3ub(255, 255, 255   );
	// Red

	glVertex2f(0.1f, 0.15f); //BODY   // x, y
	glVertex2f(0.12f, 0.2f);
	glVertex2f(0.24f, 0.2f);    // x, y
	glVertex2f(0.225f, 0.15f);

	glEnd();

glLineWidth(3.3);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255   );

	glVertex2f(0.123f, 0.2f); //HATOL
	glVertex2f(0.123f, 0.255f);
glVertex2f(0.237f, 0.255f);
	glVertex2f(0.12f, 0.255f);
	glVertex2f(0.237f, 0.2275f);
	glVertex2f(0.12f, 0.2275f);
glVertex2f(0.237f, 0.2f);
	glVertex2f(0.237f, 0.255f);

	glEnd();
glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255   );

	glVertex2f(0.105f, 0.15f);
	glVertex2f(0.105f, 0.1f);
	glVertex2f(0.22f, 0.15f);
	glVertex2f(0.22f, 0.1f);
    glVertex2f(0.235f, 0.2f);
	glVertex2f(0.235f, 0.15f);
	glEnd();
}

void hile(){ ////hill

glBegin(GL_TRIANGLES);              // Each set of 4 after hill vertics form a quad
	glColor3f(0.10,0.3,0.3 ); // Red

	glVertex2f(0.15f, 0.54f);
	glVertex2f(0.02f,  0.40f);   // x, y
	glVertex2f(0.28f, 0.40f);

	glEnd();

glBegin(GL_TRIANGLES);              // Each set of 4 vertics form a quad
	glColor3f(0.10,0.3,0.3 ); // Red

	glVertex2f(0.28f, 0.40f);
	glVertex2f(0.42f,  0.40f);   // x, y
	glVertex2f(0.35f, 0.50f);

	glEnd();

	glBegin(GL_TRIANGLES);              // Each set of 4 vertics form a quad
	glColor3f(0.10,0.5,0.5 ); // Red

	glVertex2f(-0.02f, 0.40f);
	glVertex2f(-0.02f,  0.50f);   // x, y
	glVertex2f(0.1f, 0.40f);

	glEnd();

	glBegin(GL_TRIANGLES);              // Each set of 4 vertics form a quad
	glColor3f(0.10,0.5,0.5 ); // Red

	glVertex2f(-0.02f, 0.40f);
	glVertex2f(0.08f,  0.54f);   // x, y
	glVertex2f(0.18f, 0.40f);

	glEnd();

glBegin(GL_TRIANGLES);              // Each set of 4 vertics form a quad
	glColor3f(0.10,0.5,0.5 ); // Red

	glVertex2f(0.1f, 0.40f);
	glVertex2f(0.28f,  0.54f);   // x, y
	glVertex2f(0.38f, 0.40f);

	glEnd();

glBegin(GL_TRIANGLES);              // Each set of 4 vertics form a quad
	glColor3f(0.10,0.5,0.5 ); // Red

	glVertex2f(0.32f, 0.40f);
	glVertex2f(0.42f,  0.54f);   // x, y
	glVertex2f(0.52f, 0.40f);

	glEnd();
	glBegin(GL_TRIANGLES);              // Each set of 4 vertics form a quad
	glColor3f(0.10,0.5,0.5 ); // Red

	glVertex2f(0.44f, 0.40f);
	glVertex2f(0.63f,  0.58f);   // x, y
	glVertex2f(0.72f, 0.40f);

	glEnd();
	glBegin(GL_TRIANGLES);              // Each set of 4 vertics form a quad
	glColor3f(0.10,0.5,0.5 ); // Red

	glVertex2f(0.63f, 0.40f);
	glVertex2f(0.72f,  0.50f);   // x, y
	glVertex2f(0.72f, 0.40f);

	glEnd();
	glBegin(GL_TRIANGLES);              // Each set of 4 vertics form a quad
	glColor3f(0.10,0.5,0.5 ); // Red

	glVertex2f(0.87f, 0.40f);
	glVertex2f(0.94f,  0.53f);   // x, y
	glVertex2f(1.2f, 0.40f);

	glEnd();
	glBegin(GL_TRIANGLES);              // Each set of 4 vertics form a quad
	glColor3f(0.10,0.5,0.5 ); // Red

	glVertex2f(0.87f, 0.40f);
	glVertex2f(0.87f,  0.50f);   // x, y
	glVertex2f(0.94f, 0.40f);

glEnd();

}


void rain() {
    glPushMatrix();
    glTranslatef(position_rain2, position_rain, 0.0f);
    glLineWidth(2.0f);
    glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(0.0f, 0.9f);
        glVertex2f(0.05f, 0.85f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(0.0f, 0.7f);
        glVertex2f(0.05f, 0.65f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(0.0f, 0.5f);
        glVertex2f(0.05f, 0.45f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(0.0f, 0.3f);
        glVertex2f(0.05f, 0.25f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(0.0f, 0.1f);
        glVertex2f(0.05f, 0.05f);
    glEnd();

    glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(0.05f, -0.9f);
        glVertex2f(0.0f, -0.85f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(0.05f, -0.7f);
        glVertex2f(0.0f, -0.65f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(0.05f, -0.5f);
        glVertex2f(0.0f, -0.45f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(0.05f, -0.3f);
        glVertex2f(0.0f, -0.25f);
    glEnd();
    glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(0.05f, -0.1f);
        glVertex2f(0.0f, -0.05f);
    glEnd();

    for(int i = 0; i < 100; i++) {
        glTranslatef(-0.2, 0.0, 0.0f);
        glBegin(GL_LINES);
            glColor3ub(255, 255, 255);
            glVertex2f(0.0f, 0.9f);
            glVertex2f(0.05f, 0.85f);
        glEnd();
        glBegin(GL_LINES);
            glColor3ub(255, 255, 255);
            glVertex2f(0.0f, 0.7f);
            glVertex2f(0.05f, 0.65f);
        glEnd();
        glBegin(GL_LINES);
            glColor3ub(255, 255, 255);
            glVertex2f(0.0f, 0.5f);
            glVertex2f(0.05f, 0.45f);
        glEnd();
        glBegin(GL_LINES);
            glColor3ub(255, 255, 255);
            glVertex2f(0.0f, 0.3f);
            glVertex2f(0.05f, 0.25f);
        glEnd();
        glBegin(GL_LINES);
            glColor3ub(255, 255, 255);
            glVertex2f(0.0f, 0.1f);
            glVertex2f(0.05f, 0.05f);
        glEnd();

        glBegin(GL_LINES);
            glColor3ub(255, 255, 255);
            glVertex2f(0.05f, -0.9f);
            glVertex2f(0.0f, -0.85f);
        glEnd();
        glBegin(GL_LINES);
            glColor3ub(255, 255, 255);
            glVertex2f(0.05f, -0.7f);
            glVertex2f(0.0f, -0.65f);
        glEnd();
        glBegin(GL_LINES);
            glColor3ub(255, 255, 255);
            glVertex2f(0.05f, -0.5f);
            glVertex2f(0.0f, -0.45f);
        glEnd();
        glBegin(GL_LINES);
            glColor3ub(255, 255, 255);
            glVertex2f(0.05f, -0.3f);
            glVertex2f(0.0f, -0.25f);
        glEnd();
        glBegin(GL_LINES);
            glColor3ub(255, 255, 255);
            glVertex2f(0.05f, -0.1f);
            glVertex2f(0.0f, -0.05f);
        glEnd();
    }

    for(int i = 0; i < 100; i++) {
        glTranslatef(0.2, 0.0, 0.0f);
        glBegin(GL_LINES);
            glColor3ub(255, 255, 255);
            glVertex2f(0.0f, 0.9f);
            glVertex2f(0.05f, 0.85f);
        glEnd();
        glBegin(GL_LINES);
            glColor3ub(255, 255, 255);
            glVertex2f(0.0f, 0.7f);
            glVertex2f(0.05f, 0.65f);
        glEnd();
        glBegin(GL_LINES);
            glColor3ub(255, 255, 255);
            glVertex2f(0.0f, 0.5f);
            glVertex2f(0.05f, 0.45f);
        glEnd();
        glBegin(GL_LINES);
            glColor3ub(255, 255, 255);
            glVertex2f(0.0f, 0.3f);
            glVertex2f(0.05f, 0.25f);
        glEnd();
        glBegin(GL_LINES);
            glColor3ub(255, 255, 255);
            glVertex2f(0.0f, 0.1f);
            glVertex2f(0.05f, 0.05f);
        glEnd();

        glBegin(GL_LINES);
            glColor3ub(255, 255, 255);
            glVertex2f(0.05f, -0.9f);
            glVertex2f(0.0f, -0.85f);
        glEnd();
        glBegin(GL_LINES);
            glColor3ub(255, 255, 255);
            glVertex2f(0.05f, -0.7f);
            glVertex2f(0.0f, -0.65f);
        glEnd();
        glBegin(GL_LINES);
            glColor3ub(255, 255, 255);
            glVertex2f(0.05f, -0.5f);
            glVertex2f(0.0f, -0.45f);
        glEnd();
        glBegin(GL_LINES);
            glColor3ub(255, 255, 255);
            glVertex2f(0.05f, -0.3f);
            glVertex2f(0.0f, -0.25f);
        glEnd();
        glBegin(GL_LINES);
            glColor3ub(255, 255, 255);
            glVertex2f(0.05f, -0.1f);
            glVertex2f(0.0f, -0.05f);
        glEnd();
    }
    glPopMatrix();
}


void display(){
           if(nightStatus==0){
                    ///day
     glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
     glClear(GL_COLOR_BUFFER_BIT);

   water();
   glPushMatrix();
   glTranslatef(-position,0.0f, 0.0f);
   waterLine();
   glPopMatrix();

   glPushMatrix();
   glTranslatef(position,0.0f,0.0f);
   drawBoat();
   glPopMatrix();

   sky();
   glPushMatrix();
   if(sunStatus==0){
   sun();
   }
   else if (sunStatus==1){
        glTranslatef(0.0f,position1,0.0f);
         sun();
   }
   glPopMatrix();

   glPushMatrix();
   glTranslatef(position,0.0f,0.0f);
   cloud();
   glPopMatrix();

   glPushMatrix();
   glTranslatef(-position,0.0f,0.0f);
   bird();
   glPopMatrix();

     field();
     buildingPart();
     chair();
     tree();
     hile();

     drawRoad();
     glPushMatrix();
     glTranslatef(position,0.0f, 0.0f);
     drawTruck();
     drawCar();
     if (carLightStatus==1){
     drawCarLight();
     drawTruckLight();
     }

    if(r != 0)
        rain();
     glPopMatrix();
     drawLamp();


glFlush();

}
    else {
           ///night
            glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
     glClear(GL_COLOR_BUFFER_BIT);

   waterNight();
   glPushMatrix();
   glTranslatef(-position,0.0f, 0.0f);
   waterLineNight();
   glPopMatrix();

   glPushMatrix();
   glTranslatef(position,0.0f,0.0f);
   drawBoat();
   glPopMatrix();

   skyNight();
   star();
   glPushMatrix();
   moon();
   glPopMatrix();

   glPushMatrix();
   glTranslatef(position,0.0f,0.0f);
   cloudNight();
   glPopMatrix();

   glPushMatrix();
   glTranslatef(-position,0.0f,0.0f);
   bird();
   glPopMatrix();

     fieldNight();
     buildingPart();
     chair();
     tree();
     hile();

     drawRoad();
     glPushMatrix();
     glTranslatef(position,0.0f, 0.0f);
     drawTruck();
     drawCar();
     if (carLightStatus==1){
     drawCarLight();
     drawTruckLight();
     }
     glPopMatrix();
     drawLamp();
    if(r != 0)
        rain();
glFlush();

         }
}

void update_rain(int value){
    if(position_rain < -0.1)
        position_rain = 0.3f;
    position_rain -= speed_rain;
    if(position_rain2 > 2.0)
        position_rain2 = 1.8f;
    position_rain2 += speed_rain2;
	glutPostRedisplay();
	glutTimerFunc(100, update_rain, 0);
    }

void rain_button(int button, int state, int x, int y){
    if(button == GLUT_LEFT_BUTTON){
        r++;
    }
    if(button == GLUT_RIGHT_BUTTON){
        r = 0;
    }
}





//////move algo//////////
void keyboard(unsigned char key, int x, int y){


	 if (key == 's' || key == 's'){		//sun start
		sunStatus = 1;
		speed1=0.002;
	}
	 if (key == 'S' || key == 'S'){		//sun stop
		speed1=0;
	}
	if (key == 'l' || key == 'l'){		//carLight start
		carLightStatus = 1;
	}
	 if (key == 'L' || key == 'L'){		//carLight stop
		carLightStatus=0;
	}
	if (key == 'n' || key == 'N'){		//Night
		nightStatus=1;
	}
	if (key == 'd' || key == 'D'){		//Day
		nightStatus=0;
	}
}

void myInit(void)
{
glClearColor(1.0, 1.0, 1.0, 1.0);
glColor3f(0.0f, 0.0f, 0.0f);
glPointSize(4.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);

}

int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(700, 700);
   glutInitWindowPosition(0, 0);
   glutCreateWindow("Ocean and City's View");
    cout << "Project Title: Ocean and City's View \n" << endl;
    cout<<"Press 's' = Sun Start"<<endl;
    cout<<"Press 'S' = Sun Stop"<<endl;

    cout<<"Press 'l' = Car Light Start"<<endl;
    cout<<"Press 'L' = Car Light Stop"<<endl;
    cout<<"Press 'N' = Switch to NIGHT view."<<endl;
    cout<<"Press 'D' = Switch to DAY view."<<endl;
    cout<<"Press 'LMB' = Start RAIN."<<endl;
    cout<<"Press 'RMB' = Stop RAIN."<<endl<<endl;
    cout<<"Group Members:\n          NAME              ID\nSHEIKH TAHMEED HOSSAIN, 20-42981-1\nUDAY KUMAR SARKER PRANTO, 20-42941-1\nMD. OMAR FARUK FAISAL, 20-43669-2\nFARIHA SHAHRIN,20-42929-1"<<endl;

   glutDisplayFunc(display);
   glutKeyboardFunc(keyboard);
   glutTimerFunc(100,update,0);
   glutTimerFunc(100,update1,0);
    glutTimerFunc(100, update_rain, 0);
    glutMouseFunc(rain_button);
   myInit();
   glutMainLoop();
   return 0;
}
