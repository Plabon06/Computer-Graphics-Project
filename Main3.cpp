 int i;

    GLfloat p1=0.2f; GLfloat q1= 0.9f; GLfloat r1 = 0.1f;
    int tringle2=40;

    GLfloat tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.7,0.7,0.80);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );
     }
    glEnd ();
    }

    //1st cloud right part
    {


    int i;

    GLfloat p1=0.3f; GLfloat q1= 0.9f; GLfloat r1 = 0.07f;
    int tringle2=40;

    GLfloat tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.7,0.7,0.80);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();
    }

   }




    {
	//2nd cloud left part
    int j;

    GLfloat p2=-0.05f; GLfloat q2= 0.7f; GLfloat r2 = 0.07f;
    int tringle3=40;

    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.7,0.7,0.80);
    glVertex2f (p2,q2);
    for(j= 0;j<=tringle3; j++)
    {
        glVertex2f (
                    p2+(r2*cos(j*tp3/tringle3)),
                    q2+(r2*sin(j*tp3/tringle3))
                    );


    }
    glEnd ();

    //2nd cloud Middle part
    {

    int j;

    GLfloat p2=0.05f; GLfloat q2= 0.7f; GLfloat r2 = 0.1f;
    int tringle3=40;




    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.7,0.7,0.80);
    glVertex2f (p2,q2);
    for(j= 0;j<=tringle3; j++)
    {
        glVertex2f (
                    p2+(r2*cos(j*tp3/tringle3)),
                    q2+(r2*sin(j*tp3/tringle3))
                    );

    }
    glEnd ();
    }

    //2nd cloud right part
    {


    int j;

    GLfloat p2=0.15f; GLfloat q2= 0.7f; GLfloat r2 = 0.07f;
    int tringle3=40;




    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.7,0.7,0.80);
    glVertex2f (p2,q2);
    for(j= 0;j<=tringle3; j++)
    {
        glVertex2f (
                    p2+(r2*cos(j*tp3/tringle3)),
                    q2+(r2*sin(j*tp3/tringle3))
                    );



    }
    glEnd ();
    }
    }
}

void sun(){
     //sun
{


    int j;

    GLfloat p2=0.6f; GLfloat q2= 0.8f; GLfloat r2 = 0.08f;
    int tringle3=30;




    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,0);
    glVertex2f (p2,q2);
    for(j= 0;j<=tringle3; j++)
    {
        glVertex2f (
                    p2+(r2*cos(j*tp3/tringle3)),
                    q2+(r2*sin(j*tp3/tringle3))
                    );



    }
    glEnd ();
    }
}
void sky(){
     // sky
    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.3f, 0.9f, 1.0f);
	glVertex2f(-1.0f, 0.4f);   // x, y
	glVertex2f(1.0f, 0.4f);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(-1.0f, 1.0f);
	glEnd();
}
void skyNight(){
     // sky
    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f ( 0.0f,0.0f,0.3f);
	glVertex2f(-1.0f, 0.4f);   // x, y
	glVertex2f(1.0f, 0.4f);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(-1.0f, 1.0f);
	glEnd();
}
void tree(){


//tree start
//tree1
glLineWidth(7.5);
	glBegin(GL_LINES);
	glColor3f(0.5, 0.2, 0.0 );
	glVertex2f(-0.95f, 0.15f);
	glVertex2f(-0.95f, 0.24f);



	glEnd();
glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3ub(85, 139, 47  ); // Red

	glVertex2f(-0.995f, 0.24f);    // x, y
	glVertex2f(-0.905f, 0.24f);
	glVertex2f(-.95f,  0.4f);

	glEnd();
glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3ub(85, 139, 47  ); // Red

	glVertex2f(-0.99f, 0.3f);    // x, y
	glVertex2f(-0.91f, 0.3f);
	glVertex2f(-.95f,  0.40f);

	glEnd();
	//tree2
	glLineWidth(7.5);
	glBegin(GL_LINES);
	glColor3f(0.5, 0.2, 0.0 );
	glVertex2f(-0.55f, 0.15f);
	glVertex2f(-0.55f, 0.24f);
	glEnd();
	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3ub(85, 139, 47  ); // Red

	glVertex2f(-0.595f, 0.24f);    // x, y
	glVertex2f(-0.505f, 0.24f);
	glVertex2f(-.55f,  0.4f);

	glEnd();
glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3ub(85, 139, 47  ); // Red

	glVertex2f(-0.59f, 0.3f);    // x, y
	glVertex2f(-0.51f, 0.3f);
	glVertex2f(-.55f,  0.42f);
	glEnd();
//tree3
glLineWidth(7.0);
	glBegin(GL_LINES);
	glColor3f(0.5, 0.2, 0.0 );
	glVertex2f(-0.24f, 0.24f);
	glVertex2f(-0.24f, 0.31f);
	glEnd();
	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3ub(85, 139, 47  ); // Red

	glVertex2f(-0.27f, 0.31f);    // x, y
	glVertex2f(-0.21f, 0.31f);
	glVertex2f(-.24f,  0.41f);

	glEnd();

glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3ub(85, 139, 47  ); // Red

	glVertex2f(-0.27f, 0.35f);    // x, y
	glVertex2f(-0.21f, 0.35f);
	glVertex2f(-.24f,  0.42f);
	glEnd();
	//donla
	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3ub(69, 90, 100   );
	glVertex2f(0.60f, 0.15f);
	glVertex2f(0.6f, 0.39f);
	glVertex2f(0.50f, 0.15f);
	glVertex2f(0.5f, 0.39f);
	glVertex2f(0.50f, 0.35f);
	glVertex2f(0.60f, 0.35f);
	glEnd();
	glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(69, 90, 100   );
	glVertex2f(0.57f, 0.35f);
	glVertex2f(0.57f, 0.25f);
	glVertex2f(0.53f, 0.25f);
	glVertex2f(0.53f, 0.35f);
	glEnd();
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow

	glVertex2f(0.515f, 0.23f);
	glVertex2f(0.53f, 0.25f);
	glVertex2f(0.57f, 0.25f);
	glVertex2f(0.585f, 0.23f);

	glEnd();
	glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3f(0.5, 0.2, 0.0 );
	glVertex2f(0.515f, 0.229f);
	glVertex2f(0.585f, 0.229f);

	glEnd();
	//donla
	//tree 5
	glLineWidth(7.5);
	glBegin(GL_LINES);
	glColor3f(0.5, 0.2, 0.0 );
	glVertex2f(0.67f, 0.15f);
	glVertex2f(0.67f, 0.24f);
	glEnd();
	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3ub(85, 139, 47  ); // Red

	glVertex2f(0.72f, 0.24f);    // x, y
	glVertex2f(0.62f, 0.24f);
	glVertex2f(.67f,  0.4f);

	glEnd();
glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3ub(85, 139, 47  ); // Red

	glVertex2f(0.715f, 0.3f);    // x, y
	glVertex2f(0.625f, 0.3f);
	glVertex2f(0.67f,  0.40f);
	glEnd();
	//treeright 6
	glLineWidth(6.5);
	glBegin(GL_LINES);
	glColor3f(0.5, 0.2, 0.0 );
	glVertex2f(0.97f, 0.25f);
	glVertex2f(0.97f, 0.30f);
	glEnd();
	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3ub(85, 139, 47  ); // Red

	glVertex2f(0.94f, 0.30f);    // x, y
	glVertex2f(1.0f, 0.30f);
	glVertex2f(.97f,  0.38f);

	glEnd();
glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3ub(85, 139, 47  ); // Red

	glVertex2f(0.945f, 0.34f);    // x, y
	glVertex2f(0.995f, 0.34f);
	glVertex2f(0.97f,  0.40f);
	glEnd();
	//tree 4
	glLineWidth(6.5);
	glBegin(GL_LINES);
	glColor3f(0.5, 0.2, 0.0 );
	glVertex2f(0.05f, 0.15f);
	glVertex2f(0.05f, 0.25f);
	glEnd();
    glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3ub(85, 139, 47  ); // Red

	glVertex2f(0.005f, 0.25f);    // x, y
	glVertex2f(0.095f, 0.25f);
	glVertex2f(.05f,  0.40f);
glEnd();
glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3ub(85, 139, 47  ); // Red

	glVertex2f(0.01f, 0.30f);    // x, y
	glVertex2f(0.09f, 0.30f);
	glVertex2f(0.05f,  0.40f);
	glEnd();

//tree end






}
void field(){
      glLineWidth(7.5);
	//top
	 glBegin(GL_QUADS);              // Each set of field er jonno(green)
	glColor3f(0.3f, 0.7f, 0.0f);
	glVertex2f(-1.0f, 0.4f);
	glVertex2f(1.0f, 0.4f);
	glVertex2f(1.0f, 0.0f);
	glVertex2f(-1.0f, 0.0f);
	glEnd();
}
///fieldNight
void fieldNight(){
      glLineWidth(7.5);
	//top
	 glBegin(GL_QUADS);              // Each set of field er jonno(green)
	glColor3f(0.0f, 0.3f, 0.20f);
	glVertex2f(-1.0f, 0.4f);
	glVertex2f(1.0f, 0.4f);
	glVertex2f(1.0f, 0.0f);
	glVertex2f(-1.0f, 0.0f);
	glEnd();
}
void buildingPart(){
glBegin(GL_QUADS);              // Each set of house gulor samer road
	glColor3ub(189, 189, 189 );


	glVertex2f(-1.0f, -0.1f);
	glVertex2f(-1.0f, 0.02f);
	glVertex2f(1.0f, 0.02f);
	glVertex2f(1.0f, -0.1f);

	glEnd();

//home1
 glBegin(GL_QUADS);              // Each set of house body
	glColor3ub(153, 0, 0   ); // Red

	glVertex2f(-0.9f, 0.1f);
	glVertex2f(-0.9f, 0.3f);
	glVertex2f(-0.6f, 0.3f);
	glVertex2f(-0.6f, 0.1f);

	glEnd();

glBegin(GL_TRIANGLES);              // Each set of house upor er chad
	glColor3ub(153, 0, 0 ); // Red

	glVertex2f(-0.9f, 0.3f);
	   // x, y
	   glVertex2f(-.75f,  0.5f);
	glVertex2f(-0.6f, 0.3f);
	glEnd();

glBegin(GL_QUADS);              // Each set of house left wall
	glColor3ub(153, 255, 0 ); // Red

	glVertex2f(-1.0f, 0.05f);    // x, y
	glVertex2f(-1.0f, 0.1f);
	glVertex2f(-0.7f, 0.1f);    // x, y
	glVertex2f(-0.7f, 0.05f);

	glEnd();

glBegin(GL_QUADS);              // Each set ofhouse wall black
	glColor3ub(51, 0, 0 ); // Red

	glVertex2f(-0.7f, 0.05f);    // x, y
	glVertex2f(-0.7f, 0.12f);
	glVertex2f(-0.68f, 0.12f);    // x, y
	glVertex2f(-0.68f, 0.05f);

	glEnd();

glBegin(GL_QUADS);              // Each set ofhouse right wall
	glColor3ub(153, 255, 0 ); // Red

	glVertex2f(-0.6f, 0.05f);    // x, y
	glVertex2f(-0.6f, 0.1f);
	glVertex2f(-0.5f, 0.1f);    // x, y
	glVertex2f(-0.5f, 0.05f);

	glEnd();

	glBegin(GL_QUADS);              // Each set ofhouse wall black
	glColor3ub(51, 0, 0 ); // Red

	glVertex2f(-0.62f, 0.05f);    // x, y
	glVertex2f(-0.62f, 0.12f);
	glVertex2f(-0.6f, 0.12f);    // x, y
	glVertex2f(-0.6f, 0.05f);

	glEnd();

	glBegin(GL_QUADS);              // Each set ofhouse door road
	glColor3ub(189, 189, 189 );
	// Red

	glVertex2f(-0.68f, 0.02f);    // x, y
	glVertex2f(-0.68f, 0.1f);
	glVertex2f(-0.62f, 0.1f);    // x, y
	glVertex2f(-0.62f, 0.02f);

	glEnd();


	glBegin(GL_QUADS);              // Each set ofdoor form a quad
	glColor3ub(255, 255, 255  );


	glVertex2f(-0.67f, 0.1f);
	glVertex2f(-0.67f, 0.21f);
	glVertex2f(-0.63f, 0.21f);
	glVertex2f(-0.63f, 0.1f);

	glEnd();

	glBegin(GL_QUADS);              // Each set ofdoor (window left)
	glColor3ub(51, 153, 255   );


	glVertex2f(-0.665f, 0.110f);
	glVertex2f(-0.665f, 0.19f);
	glVertex2f(-0.655f, 0.19f);
	glVertex2f(-0.655f, 0.110f);

	glEnd();

	glBegin(GL_QUADS);              // Each set ofdoor (window right)
	glColor3ub(51, 153, 255   );


	glVertex2f(-0.635f, 0.110f);
	glVertex2f(-0.635f, 0.19f);
	glVertex2f(-0.645f, 0.19f);
	glVertex2f(-0.645f, 0.110f);

	glEnd();

	glBegin(GL_QUADS);              // Each set of 1st windows form a quad
	glColor3ub(255, 255, 255  );
	// Red

	glVertex2f(-0.86f, 0.15f);    // x, y
	glVertex2f(-0.86f, 0.22f);
	glVertex2f(-0.81f, 0.22f);    // x, y
	glVertex2f(-0.81f, 0.15f);

	glEnd();

    glBegin(GL_QUADS);              // Each set ofist window glass form a quad
	glColor3ub(51, 153, 255   );
	// Red

	glVertex2f(-0.855f, 0.16f);    // x, y
	glVertex2f(-0.855f, 0.21f);
	glVertex2f(-0.840f, 0.21f);    // x, y
	glVertex2f(-0.840f, 0.16f);

	glEnd();
	glBegin(GL_QUADS);              // Each set of 1st window glass form a quad
	glColor3ub(51, 153, 255   );
	// Red

	glVertex2f(-0.83f, 0.16f);    // x, y
	glVertex2f(-0.830f, 0.21f);
	glVertex2f(-0.815f, 0.21f);    // x, y
	glVertex2f(-0.815f, 0.16f);

	glEnd();
	glBegin(GL_QUADS);              // Each set of2nd windows
	glColor3ub(255, 255, 255  );
	// Red

	glVertex2f(-0.76f, 0.15f);    // x, y
	glVertex2f(-0.76f, 0.22f);
	glVertex2f(-0.71f, 0.22f);    // x, y
	glVertex2f(-0.71f, 0.15f);

	glEnd();
	glBegin(GL_QUADS);              // Each set of 2nd window glass
	glColor3ub(51, 153, 255   );
	// Red

	glVertex2f(-0.73f, 0.16f);    // x, y
	glVertex2f(-0.73f, 0.21f);
	glVertex2f(-0.715f, 0.21f);    // x, y
	glVertex2f(-0.715f, 0.16f);

	glEnd();
	glBegin(GL_QUADS);              // Each set of 2nd window glass
	glColor3ub(51, 153, 255   );
	// Red

	glVertex2f(-0.755f, 0.16f);
	glVertex2f(-0.755f, 0.21f);
	glVertex2f(-0.74f, 0.21f);
	glVertex2f(-0.74f, 0.16f);

	glEnd();
	glLineWidth(3.5);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 0 );
	glVertex2f(-0.767f, 0.222f);//2nd window chad
	glVertex2f(-0.703f, 0.222f);

	glVertex2f(-0.867f, 0.222f);//1st window chad
	glVertex2f(-0.803f, 0.222f);

	glEnd();
	glBegin(GL_QUADS);              // Each set of top window
	glColor3ub(255, 255, 255  );
	// Red

	glVertex2f(-0.725f, 0.35f);    // x, y
	glVertex2f(-0.725f, 0.40f);
	glVertex2f(-0.76f, 0.40f);    // x, y
	glVertex2f(-0.76f, 0.35f);

	glEnd();
	glBegin(GL_QUADS);              // Each set of top window glass
	glColor3ub(51, 153, 255   );
	// Red

	glVertex2f(-0.733f, 0.36f);    // x, y
	glVertex2f(-0.733f, 0.39f);
	glVertex2f(-0.752f, 0.39f);    // x, y
	glVertex2f(-0.752f, 0.36f);

	glEnd();

	glLineWidth(7.5);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 0 );
	glVertex2f(-0.904f, 0.315f);//home1 left chad
	glVertex2f(-0.75f, 0.5f);

	glVertex2f(-0.75f, 0.5f);//home1 right chad
	glVertex2f(-0.599f, 0.315f);

	glEnd();
	//home3
	glLineWidth(7.5);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255  );
	glVertex2f(0.71f, 0.53f);//bulding3 chad
	glVertex2f(0.88f, 0.53f);

glVertex2f(0.87f, 0.36f);//bulding3 door side chad
	glVertex2f(0.944f, 0.249f);
	glEnd();
	glBegin(GL_QUADS);              // Each set ofbulding3 form a quad
	glColor3ub(40, 55, 71  );
	// Red

	glVertex2f(0.72f, 0.1f);    // x, y
	glVertex2f(0.72f, 0.52f);
	glVertex2f(0.87f, 0.52f);    // x, y
	glVertex2f(0.87f, 0.1f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form bulding3 door side
	glColor3ub(245, 124, 0 ); // Yellow

	glVertex2f(0.87f, 0.1f);    // x, y
	glVertex2f(0.87f, 0.35f);
	glVertex2f(0.94f, 0.24f);
	glVertex2f(0.94f, 0.1f);
glEnd();
glBegin(GL_QUADS);              // Each set of top 1st barandah nicher side
	glColor3ub(51, 255, 255  );
	// Red

	glVertex2f(0.735f, 0.385f);    // x, y
	glVertex2f(0.735f, 0.42f);
	glVertex2f(0.80f, 0.42f);    // x, y
	glVertex2f(0.80f, 0.385f);

	glEnd();
glBegin(GL_QUADS);              // Each set oftop 1st barandah window
	glColor3ub(255, 255, 255 );
	// Red

	glVertex2f(0.745f, 0.42f);    // x, y
	glVertex2f(0.745f, 0.48f);
	glVertex2f(0.79f, 0.48f);    // x, y
	glVertex2f(0.79f, 0.42f);

	glEnd();
	glLineWidth(3.5);
	glBegin(GL_LINES);
	glColor3ub(255, 238, 88   );
	glVertex2f(0.742f, 0.485f);//1st barandah chad
	glVertex2f(0.795f, 0.485f);

	glVertex2f(0.742f, 0.346f);    // 2nd barandah chad
	glVertex2f(0.795f, 0.346f);

	glVertex2f(0.742f, 0.218f);    // 3rd 1st barandah chad
	glVertex2f(0.795f, 0.218f);
	glEnd();
	glBegin(GL_QUADS);              // Each set oftop 1st barandah window glass
	glColor3ub(153, 102, 255  );
	// Red

	glVertex2f(0.748f, 0.429f);    // x, y
	glVertex2f(0.748f, 0.473f);
	glVertex2f(0.765f, 0.473f);    // x, y
	glVertex2f(0.765f, 0.429f);

	glEnd();
	glBegin(GL_QUADS);              // Each set oftop 1st barandah window glass
	glColor3ub(153, 102, 255  );
	// Red

	glVertex2f(0.77f, 0.429f);    // x, y
	glVertex2f(0.77f, 0.473f);
	glVertex2f(0.787f, 0.473f);    // x, y
	glVertex2f(0.787f, 0.429f);

	glEnd();
	glBegin(GL_QUADS);              // Each set oftop 2nd barandah  window
	glColor3ub(255, 255, 255 );
	// Red

	glVertex2f(0.745f, 0.28f);    // x, y
	glVertex2f(0.745f, 0.34f);
	glVertex2f(0.79f, 0.34f);    // x, y
	glVertex2f(0.79f, 0.28f);

	glEnd();
	glBegin(GL_QUADS);              // Each set oftop 2nd barandah window glass
	glColor3ub(153, 102, 255  );
	// Red

	glVertex2f(0.748f, 0.285f);    // x, y
	glVertex2f(0.748f, 0.335f);
	glVertex2f(0.765f, 0.335f);    // x, y
	glVertex2f(0.765f, 0.285f);

	glEnd();
	glBegin(GL_QUADS);              // Each set oftop 2nd barandah window glass
	glColor3ub(153, 102, 255  );
	// Red

	glVertex2f(0.77f, 0.285f);    // x, y
	glVertex2f(0.77f, 0.335f);
	glVertex2f(0.787f, 0.335f);    // x, y
	glVertex2f(0.787f, 0.285f);

	glEnd();
glBegin(GL_QUADS);              // Each set oftop 2nd barandah
	glColor3ub(51, 255, 255  );
	// Red

	glVertex2f(0.735f, 0.245f);    // x, y
	glVertex2f(0.735f, 0.28f);
	glVertex2f(0.80f, 0.28f);    // x, y
	glVertex2f(0.80f, 0.245f);

	glEnd();

	glBegin(GL_QUADS);              // Each set ofbulding form a quad
	glColor3ub(51, 255, 255  );
	// Red

	glVertex2f(0.735f, 0.12f);    // x, y
	glVertex2f(0.735f, 0.155f);
	glVertex2f(0.80f, 0.155f);    // x, y
	glVertex2f(0.80f, 0.12f);

	glEnd();
	glBegin(GL_QUADS);              // Each set oftop 3rd barandah window
	glColor3ub(255, 255, 255 );
	// Red

	glVertex2f(0.745f, 0.155f);    // x, y
	glVertex2f(0.745f, 0.21f);
	glVertex2f(0.79f, 0.21f);    // x, y
	glVertex2f(0.79f, 0.155f);

	glEnd();
glBegin(GL_QUADS);              // Each set oftop 3rd barandah window glass
	glColor3ub(153, 102, 255  );
	// Red

	glVertex2f(0.748f, 0.16f);    // x, y
	glVertex2f(0.748f, 0.205f);
	glVertex2f(0.765f, 0.205f);    // x, y
	glVertex2f(0.765f, 0.16f);

	glEnd();
	glBegin(GL_QUADS);              // Each set oftop 3rd barandah window glass
	glColor3ub(153, 102, 255  );
	// Red

	glVertex2f(0.77f, 0.16f);    // x, y
	glVertex2f(0.77f, 0.205f);
	glVertex2f(0.787f, 0.205f);    // x, y
	glVertex2f(0.787f, 0.16f);

	glEnd();
	glBegin(GL_QUADS);              // Each set oftop 3rd barandah
	glColor3ub(255, 255, 255 );
	// Red

	glVertex2f(0.825f, 0.16f);    // x, y
	glVertex2f(0.825f, 0.205f);
	glVertex2f(0.85f, 0.205f);    // x, y
	glVertex2f(0.85f, 0.16f);

	glEnd();
glBegin(GL_QUADS);              // Each set ofbulding last 1st window glass
	glColor3ub(153, 102, 255  );
	// Red

	glVertex2f(0.83f, 0.165f);    // x, y
	glVertex2f(0.83f, 0.20f);
	glVertex2f(0.845f, 0.20f);    // x, y
	glVertex2f(0.845f, 0.165f);

	glEnd();
	glBegin(GL_QUADS);              // Each set ofbulding last 1st window
	glColor3ub(255, 255, 255 );
	// Red

	glVertex2f(0.825f, 0.285f);    // x, y
	glVertex2f(0.825f, 0.335f);
	glVertex2f(0.85f, 0.335f);    // x, y
	glVertex2f(0.85f, 0.285f);

	glEnd();
glBegin(GL_QUADS);              // Each set ofbulding last 2nd window glass
	glColor3ub(153, 102, 255  );
	// Red

	glVertex2f(0.83f, 0.290f);    // x, y
	glVertex2f(0.83f, 0.33f);
	glVertex2f(0.845f, 0.33f);    // x, y
	glVertex2f(0.845f, 0.290f);

	glEnd();
	glBegin(GL_QUADS);              // Each set oflast 2nd window
	glColor3ub(255, 255, 255 );
	// Red

	glVertex2f(0.825f, 0.429f);    // x, y
	glVertex2f(0.825f, 0.473f);
	glVertex2f(0.85f, 0.473f);    // x, y
	glVertex2f(0.85f, 0.429f);

	glEnd();
glBegin(GL_QUADS);              // Each set ofbulding last 3rd window  glass
	glColor3ub(153, 102, 255  );
	// Red

	glVertex2f(0.83f, 0.434f);    // x, y
	glVertex2f(0.83f, 0.468f);
	glVertex2f(0.845f, 0.468f);    // x, y
	glVertex2f(0.845f, 0.434f);

	glEnd();


	glBegin(GL_QUADS);              // Each set ofbulding door
	glColor3ub(255, 255, 255  );
	// Red

	glVertex2f(0.885f, 0.1f);    // x, y
	glVertex2f(0.885f, 0.22f);
	glVertex2f(0.92f, 0.22f);    // x, y
	glVertex2f(0.92f, 0.1f);

	glEnd();

glBegin(GL_QUADS);              // Each set ofbulding door window glass
	glColor3ub(86, 101, 115  );
	// Red

	glVertex2f(0.89f, 0.115f);    // x, y
	glVertex2f(0.89f, 0.142f);
	glVertex2f(0.90f, 0.142f);    // x, y
	glVertex2f(0.90f, 0.115f);

	glEnd();
glBegin(GL_QUADS);              // Each set ofbulding  door window glass
	glColor3ub(86, 101, 115   );
	// Red

	glVertex2f(0.905f, 0.115f);    // x, y
	glVertex2f(0.905f, 0.142f);
	glVertex2f(0.915f, 0.142f);    // x, y
	glVertex2f(0.915f, 0.115f);

	glEnd();

glBegin(GL_QUADS);              // Each set ofbulding  door window glass
	glColor3ub(86, 101, 115  );
	// Red

	glVertex2f(0.89f, 0.155f);    // x, y
	glVertex2f(0.89f, 0.185f);
	glVertex2f(0.90f, 0.185f);    // x, y
	glVertex2f(0.90f, 0.155f);

	glEnd();
glBegin(GL_QUADS);              // Each set ofbulding  door window glass
	glColor3ub(86, 101, 115   );
	// Red

	glVertex2f(0.905f, 0.155f);    // x, y
	glVertex2f(0.905f, 0.185f);
	glVertex2f(0.915f, 0.185f);    // x, y
	glVertex2f(0.915f, 0.155f);

	glEnd();


glBegin(GL_QUADS);              // Each set ofbulding door road
	glColor3ub(189, 189, 189  );
	// Red

	glVertex2f(0.877f, 0.1f);    // x, y
	glVertex2f(0.877f, 0.02f);
	glVertex2f(0.928f, 0.02f);    // x, y
	glVertex2f(0.928f, 0.1f);

	glEnd();


	//home2
	glLineWidth(7.5);
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.50f, 0.53f);
glVertex2f(-0.33f, 0.53f);



glVertex2f(-0.34f, 0.36f);
glVertex2f(-0.266f, 0.249f);
glEnd();
glBegin(GL_QUADS); // Each set ofbulding2
glColor3ub(41, 128, 185 );
// Red



glVertex2f(-0.49f, 0.1f); // x, y
glVertex2f(-0.49f, 0.52f);
glVertex2f(-0.34f, 0.52f); // x, y
glVertex2f(-0.34f, 0.1f);



glEnd();
glBegin(GL_POLYGON); // These vertices form ofbulding door side
glColor3ub(26, 82, 118); // Yellow



glVertex2f(-0.34f, 0.1f); // x, y
glVertex2f(-0.34f, 0.35f);
glVertex2f(-0.27f, 0.24f);
glVertex2f(-0.27f, 0.1f);
glEnd();
//windowroom?
glBegin(GL_QUADS); // Each set ofbulding top 1st barandah
glColor3ub(51, 255, 255 );
// Red



glVertex2f(-0.475f, 0.385f); // x, y
glVertex2f(-0.475f, 0.42f);
glVertex2f(-0.41f, 0.42f); // x, y
glVertex2f(-0.41f, 0.385f);



glEnd();
