#include<stdio.h>
int main ()
{
  
  int a;
  printf ("Welcome to CSE branch\nMy name is owais toheed\nPlease entre your semester\n  ");
  scanf("%d",&a);
   if (a==1)
   {
       printf ("welcome to 1st semester\n\n");
    

    int b;
  
    printf ("\nThere are 5 subject in 1st semester\neg. entre 1 show mathematics syllabus\n    entre 2 show basic electrical syllabus\n    entre 3 show eng. chemistry syllabus\n    entre 4 show physics syllbus\n    entre 5 show environmental science syllabus\n\nENTRE THE SUBJECT NO.\n");
    scanf("%d",&b);
    if (b==1)
    {
        printf ("UNIT I\nMultivariable Calculus (Differentiation) :Limit, continuity and partial derivatives, physical significance of partial derivative, total derivative; Tangent plane and normal line; Maxima, minima and saddle points; Method of Lagrange multipliers; Gradient, directional derivatives, curl and divergence\n\n");
        printf ("UNIT II\nMultivariable Calculus (Differentiation) :Limit, continuity and partial derivatives, physical significance of artial derivative, total derivative; Tangent plane and normal line; Maxima, minima and saddle points; Method of Lagrange multipliers; Gradient, directional derivatives, curl and divergence.\n\n");
        printf ("UNIT III\nIntegral Calculus:Evolutes and involutes; Evaluation of definite and improper integrals; Beta and Gama functions and their properties; Applications of definite integrals to evaluate surface areas and volumes of revolutions. \n\n");
        printf ("UNIT IV\nSequences and series:Convergence of sequence and series, tests for convergence; Power series, Taylor's series, series for exponential, trigonometric and logarithm functions; Fourier series: Half range sineand cosine series, Parseval’s theorem.\n\n ");
        printf ("UNIT V\nMatrices: Inverse and rank of a matrix, rank-nullity theorem; System of linear equations; Symmetric, skew-symmetric and orthogonal matrices; Determinants; Eigenvalues and eigenvectors; Diagonalization of matrices; Cayley-Hamilton Theorem, and Orthogonal transformation\n\n");
        
    }
    else if (b==2)
     {
        printf("UNIT I\nReview of Electric Circuits: Basic Electrical circuit terminology, concept of charge and energy, circuit parameters (resistance, inductance. Capacitance), ohm’s law, Kirchoff’s current law (KCL), Kirchoff’s voltage law (KVL), series and parallel combinations of resistance, inductance& capacitance. Ideal and practical voltage & current sources and their transformations, dependent voltage and current sources.\n\n");
        printf("UNIT II\nD.C Circuit Analysis: Power & energy relations, analysis of series parallel DC circuits, StarDelta transformations (ΔΎ), Loop & Nodal methods, Network Theorems: Thevenin’s, Norton’s, Maximum Power Transfer and Superposition Theorems (D.D Analysis only).\n\n");
        printf("UNIT III\nA.C. Circuit Analysis: Basic terminology and definitions, phasor and complex number representations, power energy relations in AC circuits, application of Network Theorems to AC circuits ,Resonance in series and parallel circuits, Concepts of active & reactive powers, Introduction to 3 phase circuits\n\n.");
        printf("UNIT IV\nElectromagnetism: Review of Fundamentals of Electromagnetism, Ampere’s Law, analogies between eletric circuits and magnetic circuits, Faraday’s laws of electromagnetic induction, direction of induced emf, Lenz’s law, magnetic saturation and leakage fluxes.\n\n");
        printf("UNIT V\nBasic Electrical Installations: Transformers-Concept of Inductance, Self & Mutual Inductance, and Conventions for magnetically coupled circuits, Transformers: introduction, classification & construction of single phase transformer, emf equation and phasor diagrams.\n");
        printf("Components of LT Switchgear: Switch Fuse Unit (SFU), MCB, ELCB, MCCB, Types of Wires and Cables, Earthing\n");
     }
     else if (b==3)
     {
        printf("UNIT I\nWATER TREATMENT: Water quality measurement, Hardness of water, Estimation of hardness of water, Disadvantages of hard water ,Scale and sludge formation; disadvantages, prevention and treatment, Desalination method, reverse osmosis ,Electro dialysis, Domestic water treatment.\n\n ");
        printf("UNIT II\nPOLYMERISATION: Basic concept of polymerization, Broad classification and industrial applications (Buna-N, Buna-S, Polyester, Polyethene, Polypropene, Polystyrene,), Thermosetting plastic and its softening, Biodegradable and non-biodegradable wastes. \n\n");
        printf("UNIT III\nPHOTOCHEMISTRY: Photo excitation, Luminescence and types, Norrish-I and Norrish-II reactions, Application examples of photolysis, Photosynthesis Z –Diagram, Chemistry of vision, MRI equipment and procedure of working. \n\n");
        printf("UNIT IV\nTRANSITION METAL CHEMISTRY: Structure of organic compounds up to coordination no 6, Isomerism (geometrical, optical, ionisation, linkage and coordination isomerism, bonding in coordination compounds by CFT, VBT. Application of coordination compounds in organic synthesis and Medical fields. \n\n");
        printf("UNIT V\nCEMENT AND LIME: Introduction and types of cement, Manufacture of Portland Cement, Setting and hardening of cement, Introduction and properties of Lime, Setting and hardening of lime. \n\n");

     }
     else if (b==4)
     {
        printf ("UNIT I\nWAVES, OSCILLATIONS AND INTRODUCTION TO ACOUSTICS: Wave motion, its types, Equations of wave motion, Energy and Intensity of a progressive wave, Introduction to ultrasonic waves, magnetostriction and piezoelectric effect, productions of ultrasonic waves, their detections and applications. A brief introduction to the acoustics of a hall, factors affecting the acoustics of the buildings, Reverberation Period, Sabine’s Formula for calculating Reverberation Time. \n\n");
        printf ("UNIT II\nELECTROSTATICS IN A LINEAR DIELECTRIC MEDIUM & MAGNETOSTATICS: Electrostatic field and potential of a dipole. Bound charges due to electric polarization; Electric displacement; boundary conditions on displacement; Solving simple electrostatics problems in presence of dielectrics – Point charge at the centre of a dielectric sphere, charge in front of a dielectric slab, dielectric slab and dielectric sphere in uniform electric field. Magneto statics: Bio-Savart law, Divergence and curl of static magnetic field; vector potential and calculating it for a given magnetic field using Stokes’ theorem; the equation for the vector potential and its solution for given current densities. \n\n");
        printf ("UNIT III\nQUANTUM MECHANICS FOR ENGINEERS: Introduction to Quantum mechanics, Wave nature of Particles, Time-dependent and time independent Schrodinger equation for wavefunction, Born interpretation, probability current, Expectation values, Free-particle wavefunction and wave-packets. \n\n");
        printf ("UNIT IV\nAPPLYING THE SCHRODINGER EQUATION: Solution of stationary-state Schrodinger equation for one dimensional problems– particle in a box, particle in attractive delta-function potential, square-well potential, linear harmonic oscillator. \n\n");
        printf ("UNIT V\nOPTICS: Interference: Introduction, Interference due to division of wave front: Fresnel’s Biprism, Interference due to division of amplitude: wedge shaped film, Newton’s rings. Diffraction: Introduction, Difference between Fresnel and Fraunhofer diffraction, Single slit diffraction, Transmission diffraction grating, Absent spectra. Spontaneous and stimulated emissions, Einstein’s coefficients, Laser and its principle, He-Ne laser.\n\n");
     }
     else if (b==5)
     {
        printf ("UNIT I\nELEMENTS OF ECOLOGY: Definition, Scope and basic principles of ecology and environment. Biological levels of organization, population, community, ecosystem and bio-sphere. Climatic factors - Solar radiations, temperature, water and precipitation.\n\n");
        printf ("UNIT II\nENVIRONMENTAL POLLUTION: Types of pollution, Air pollution, Noise pollution, Water pollution, Soil pollution, Thermal pollution, Radiation pollution\n\n");
        printf ("UNIT III\nBIOGEOCHEMICAL CYCLES: Importance, gaseous and sedimentary cycles. Carbon, Nitrogen, Phosphorus and Sulphur Cycles. Global Oxygen Cycles. Hydrological cycles.\n\n");
        printf ("UNIT IV\nSUCCESSION: Concepts of succession, Types of Succession, Trends in succession, Climax and stability, Co-evolution and group selection.\n\n");
        printf ("UNIT V\nMAJOR BIOMES OF THE WORLD: Characteristics of terrestrial fresh water and marine ecosystems; Forests, grasslands, lake, river and marine ecosystems of India. \n\n");
     }
     else
     {
        printf ("sorry!!!\nretry\nplease contact owais toheed \ne-mail   owaistohe@gmail.com");
     }
    


   }
   else if (a==2)
   {
       printf ("welcome to 2nd semester ");
       int c;
    printf ("\nThere are 6 subject in 2nd semester\neg. entre 1 show (mathematics II) syllabus \n    entre 2 show (basic electronic) syllabus\n    entre 3 show (Engineering Mechanics) syllabus   \n    entre 4 show (Communication Skills)\n    entre 5 show (Computer Fundamentals & Programming) syllabus \n    entre 6 show (Indian Constitution) syllabus \n\nENTRE THE SUBJECT NO.\n");
    scanf("%d",&c);
    if (c==1)
    {
      printf ("UNIT I\nMultivariable Integration: Double integrals (Cartesian), change of order of integration in double integrals, Change of variables (Cartesian to polar), Applications: areas and volumes, Triple integrals (Cartesian), orthogonal curvilinear coordinates, Simple applications involving cubes, spheres and rectangular parallelepipeds; Scalar line integrals, vector line integrals, scalar surface integrals, vector surface integrals, Theorems of Green, Gauss and Stokes’ (without proofs).\n\n");
      printf ("UNIT- II \nFirst order ordinary differential equations: Exact, linear and Bernoulli’s equations, Euler’s equations, Equations not of first degree: equations solvable for p, equations solvable for y, equations solvable for x and Clairaut’s type, Second order linear differential equations with variable coefficients, method of variation of parameters.\n\n");
      printf("UNIT- III Partial Differential Equations: Partial differential equations and its formation, Linearand non-linear partial differential equations of first order and their solutions, Charpit’s method, Lagrange’s method, Homogenous and non-homogenous linear partial differential equations with constant coefficients and their solutions,Applications of Partial Differential Equations with initial and boundary conditions, Solution by the method of separation of variables. \n\n");
      printf ("UNIT-IV\n Complex Variable – Differentiation:Differentiation, Cauchy-Riemann equations, analytic functions, elementary analytic functions (exponential, trigonometric, logarithm) and their properties; Conformal mappings, Mobius transformations and their properties.\n\n ");
      printf ("UNIT-v\nComplex Variable – Integration:Contour integrals, Cauchy-Goursat theorem (without proof), Cauchy integral formula (without proof), Liouville’s theorem (without proof) and Taylor’s series, zeros of analytic functions, singularities, Laurent’s series; Residues, Cauchy Residue theorem (without proof), Evaluation of definite integral involving sine and cosine. \n\n");
    }
    else if (c==2)
    {
      printf ("Unit-I \n");
      printf ("Semiconductors: Classification of materials and energy band diagram, Semiconductor types, Energy ");
      printf(" band diagram for Semiconductors, Drift and Diffusion Current, Mass Action Law, Charge Neutrality ");
      printf ("equations, Current density and Conductivity, Hall Effect.\n\n ");
      printf ("Unit-II \n");
      printf ("P-N Junction and applications: Basic structure, PN junction Diode and Characteristics, Current ");
      printf ("components in p-n junction, temperature dependence, equivalent circuits. Rectifiers, half wave, full wave ");
      printf ("rectifiers, bridged rectifiers (efficiency, ripple factor). Clipping and clamping circuits. Basic operations of ");
      printf ("Zener, Avalanche and Photo Diodes.\n\n ");
      printf ("Unit-III\n"); 
      printf ("Transistors: Types of transistors, operation& characteristics, CE, CB and CC configurations, Input ");
      printf ("output characteristics, biasing and bias stability, use of transistor as an amplifier and switch.\n\n");
      printf ("Unit-IV\n"); 
      printf(" Junction Field Effect Transistors: Operation and characteristics. JFET configurations and biasing. JFET ");
      printf ("as amplifier\n\n ");
      printf ("Unit-V\n");
      printf ("MOSFET:Types (Depletion and Enhancement), Operation and Characteristics (no derivation), ");
      printf ("Introduction to MOSFET Scaling and types, Introduction to Short-Channel Effects (VTH roll-off, DIBL, ");
      printf ("Hot-carrier injection");

   }
   else if (c==3)
   {
       printf("Unit-I\nTwo Dimensional force System: Basic Concepts, principal of transmissibility, resultant of a force System, Free body Diagrams, Equilibrium and equation of equilibrium Applications. Moment of a force about a point, Varrigon theorem, friction, law of friction, equilibrium of body lying on horizontal and inclined plane, Static and Dynamic Friction, wedge friction, Ladder friction applications.\n\n");
       printf ("Unit-II \nCentroid and Centre of gravity: Centroid and moment of inertia; centroid of plane area and solid bodies. Moment of inertia of plane area. Theorem of parallel axis, Theorem of perpendicular axis, radius of gyration composite ideas. Mass moment inertia of circular plate, Cylinder, Sphere.\n\n");
       printf ("Unit-III\nMember forces in Trusses: Planer truss structure, trust joint identification, strategy for planer truss analysis, Statistical determinacy and stability of planer trusses. Numerical truss analysis (Method of joints and method of sections).\n\n");
       printf("Unit-IV \nKinematics of Particles: Velocity and acceleration in rectilinear motion along a plane and curved path. Tangential and normal components of velocity and acceleration motion curves. Kinematics of rigid bodies rotation, absolute motion, relative motion. Newton’s 2nd law (rectangular, path, and polar coordinates). Work-kinetic energy, power, potential energy. Impulse-momentum (linear, angular); Impact (Direct and oblique).\n\n"); 
       printf("Unit-V \nVirtual Work and Energy Method- Virtual displacements, principle of virtual work for particle and ideal system of rigid bodies, degrees of freedom. Active force diagram, systems with friction, mechanical efficiency. Conservative forces and potential energy (elastic and gravitational), energy equation for equilibrium. Applications of energy method for equilibrium. Stability of equilibrium.");
   }

   else if (c==4)
   {
      printf ("Unit-I \nVOCABULARY BUILDING: The concept of Word Formation, Root words from foreign languages and their use in English, Acquaintance with prefixes and suffixes from foreign languages in English to form derivatives., Synonyms, antonyms, and standard abbreviations.\n\n ");
      printf ("Unit-II \nBASIC WRITING SKILLS: Use of phrases and clauses in sentences, Importance of proper punctuation, Creating coherence, Organizing principles of paragraphs in documents, Techniques for writing precisely.\n\n ");
      printf("Unit-III\n IDENTIFYING COMMON ERRORS IN WRITING: Subject-verb agreement, Noun-pronoun agreement, Articles, Prepositions, Redundancies and Clichés.\n\n ");
      printf ("Unit-IV \nNATURE AND STYLE OF SENSIBLE WRITING: Describing, Defining, Classifying, Providing examples or evidence, writing introduction and conclusion. \n\n");
      printf ("Unit-V \nWRITING PRACTICES: Comprehension, Précis Writing, Essay Writing \n");
   }
   else if (c==5)
   {
    printf ("Unit I \nIntroduction: History and Generations of Computers, Classification and Applications of Computers.Computer Hardware: Components of a computer system, Input and Output devices, Memory Hierarchy, Primary and Secondary memory. Software and Languages: Computer Software, System and Application Software, Operating systems, Booting Process.\n Programming Languages: Generations and types of Languages, Compilers, Interpreter, Assemblers, Introduction to algorithm and Flow chart.\n\n");
    printf ("Unit II \nIntroduction to C Programming: History of C, Structure of a C Program, Compiling & Executing a C program. Constants, Variables and Data Types, Storage classes, Operators and Expressions, Data Input and Output. Control Statements: Decision making and branching, IF statement, IF-ELSE statement, nested IF-ELSE statement, Switch statement, break statement, continue statement. Looping: while statement, do-while statement, for statement.\n\n");
    printf("Unit III \nIntroduction to arrays: One dimensional arrays, Two dimensional arrays and Multidimensional arrays, basic operations on arrays, strings, basic string operations. Functions: Introduction to Function, Types of functions, function declaration, calling a function, passing arguments to functions, passing arrays to functions, Recursion. \n\n");
    printf("Unit IV \nUser defined data types: Structure, Defining structures, Array of Structures, Introduction to Union and enumerated data types. Introduction to Pointers & Files: Operations on pointer, pointers & multidimensional arrays, pointers & character strings. Dynamic Memory Allocation in C: malloc, calloc, realloc and free functions. Introduction to File, Operations on files: open, close, read and write.\n\n ");
    printf ("Unit V \nNetworking: Introduction to networking, Applications, types of computer networks, Network Topology, LAN, MAN, WAN. Networking devices: Hub, switch, router, repeater, and gateway. History of internet, internet, extranet and intranet, WWW. E-mail, ISPs, surfing, phishing.\n \n");
   }
   else if (c==6)
   {
    printf("Unit I\nCONSTITUTIONAL FRAMEWORK: Historical Background, Making of the constitution, Salient features of the Indian Constitution, Preamble to the Constitution, Union and its territory, Citizenship, Fundamental rights, Directive principles of state policy, Fundamental duties, Amendment of the constitution, Basic structure of the constitution.\n\n");
    printf ("Unit II \nSYSTEM OF GOVERNMENT: Parliamentary system, Federal System, Centre-state relations, Interstate relations, Emergency provisions\n\n");
    printf ("Unit III \nCENTRAL GOVERNMENT: President, Vice-President, Prime Minister, Central Council of Ministers, Cabinet committees, Parliament, Parliamentary committees, Parliamentary forums, Supreme CourtState Government: Governor, Chief Minister, State Council of Ministers, State legislature, High court, Subordinate Courts, Special status of Jammu and Kashmir, Special provision for some statesLocal Government: Panchayati raj, Municipalities\n\n");
    printf ("Unit IV \nCONSTITUTIONAL BODIES: Election commission, Union Public service commission, State Public Service Commission, Finance Commission, National Commission for SC’s, National Commission for ST’s, Special officer for Linguistic minorities, Comptroller and auditor general of India, Attorney General of India, Advocate General of India.\n\n");
    printf ("Unit V \nNON-CONSTITUTIONAL BODIES: Planning Commission, National Development Council, National Human Rights Commission, State Human Rights Commission, Central Information Commission, State Information Commission, Central vigilance Commission, Central Bureau of Investigation, Lokpal and LokayuktasOther Constitutional Dimensions: Co-operative societies, Official Language, Public services, Tribunals, Rights and Liabilities of the Government, Authoritative text of the Constitution in Hindi Language, Special Provision relating to certain classes\n.");
   }
   else 
   {
    printf ("sorry!!!\nretry\nplease contact owais toheed \ne-mail   owaistohe@gmail.com");
   }
   }
   else if (a==3)
   {
       printf ("welcome to 3rd semester");
             int d;
   printf("\neg entre 1 show (Mathematics-III) syllabus\nentre 2 show (Data Structures Using C ) syllabus\nentre 3 show (Object Oriented Programming Using C+) syllabus\nentre 4 show (Software Engineering) syllabus\nentre 5 show (Digital Logic Design) syllabus\nentre 6 show (Entrepreneurship Development and Management) syllabus\n\n entre your subject no.");
   scanf ("%d",&d);
   if (d==1)
   {
      printf("Unit-I \n\nIntegral Transform-I: Introduction, Laplace transform, Existence theorem, Propertiesand theorem of Laplace transform, Laplace transform of unit-step function, impulse function, periodic function and error functions, Inverse Laplace transform, Convolution theorem. Applications of Laplace transform in solving differential and integral-differential equations. \n\n");
      printf("Unit-II \nIntegral Transform-II: Fourier integral, Fourier Sine and Cosine integrals, Complexform of Fourier integral, Fourier transform, Inverse Fourier transform, Fourier Sine and Cosine transforms, Properties of Fourier transform, Inverse Fourier transform, Convolution theorem, Parseval’s identities for Fourier transforms, Fourier transform of the derivatives of a function, Applications of F-transform to Boundary Value Problems. \n\n");
      printf ("Unit-III\n Z-Transform: Introduction and definition of z-transform, some standard forms, Linearity property, Damping rule Some standard results, shifting un to the right and to the left, Multiplication by n.Two basic theorems, Inverse Z-Transform, Convolution theorem, Application to difference equations. \n\n");
      printf ("Unit-IV \nBasic Probability: Probability spaces, conditional probability, independence; Discrete random variables, Independent random variables, the multinomial distribution, Poisson approximation to the binomial distribution, infinite sequences of Bernoulli trials, sums of independent random variables; Expectation of Discrete Random Variables, \n\n");
      printf("Unit-V \nBasic Statistics: Measures of Central tendency: Moments, skewness and Kurtosis - Probability distributions: Binomial, Poisson and Normal - evaluation of statistical parameters for these three distributions, Correlation and regression – Rank correlation. Curve fitting by the method of least squaresfitting of straight lines, second degree parabolas.\n");
   }
   else if(d==2)
   {
      printf("Unit-I\nReview of Data Types and Concepts: Review of data types, Scalar types, Primitive types, Structures, Unions, Enumerated types, Records, Sparse Matrices, Recursion and its importance. \n\n");
      printf("Unit-II\nSearching and Sorting: Searching: Sequential search, Binary search, Hashing, General Idea for Hash Function, Separate Chaining, Open Addressing, Linear Probing. Sorting: Bubble sort, Insertion Sort, Selection sort, Heap sort, Merge sort, Quick sort, External Sorting. \n\n");
      printf ("Unit-III\nExpression and Linear Data Structure: Definition of a Data structure, ADT, Linear Data structures. Stack: Operations, Applications, implementation using linked list as well as arrays, Expressions and their conversions, Infix, Postfix & Prefix. Queue: Types, Operations, Applications, implementation using linked list as well as arrays. Linked List:Types, Operations, Applications, Implementation. \n\n");
      printf("Unit-IV\nTrees: Preliminaries, Trees, Forest, Binary Trees, Binary Search Tree ADT, Binary Search Trees, Conversion of Forest to Binary Tree, Binary Search Tree, AVL Trees, Tree Traversals, Priority Queues (Heaps), Model, Simple implementations, Binary Heap. \n\n");
      printf("Unit-V\nGraphs: Definitions, Representation of Graphs, Adjacency Matrix, Path Matrix, Operations on Graphs, Traversing a graph: BFS and DFS, Shortest Path Algorithms:Dijkstra`s Algorithm and Warshall`s Algorithm, Minimum Spanning Tree, Kruskal`s Algorithm and Prim`s Algorithm. \n\n");
   }
   else if (d==3)
   {
      printf("Unit-I\nConcepts of Object-Oriented Programming: Object Oriented Programming Paradigm, Basic concepts of OOP`s, Benefits of OOPS, Introduction to object oriented analysis and design, Design steps, Design example, Object oriented languages, Comparison of structured and object-oriented programming languages. \n\n");
      printf("Unit-II\nExpressions, Control Structures, Arrays, Pointers and Functions: Data Types, Operators, expressions and control structures. Arrays, Storage of arrays in memory, Initializing Arrays, MultiDimensional Arrays, Strings, Pointers, accessing array elements through pointers, Arrays of pointers, Pointers to pointers, Void Pointers, Functions, Arguments, Passing Pointers as Function Arguments.\n\n");
      printf("Unit-III\nClasses and Objects: Classes and objects, access specifies in C++, constructors, destructors, Inline Functions, Friend Functions.Polymorphism: Function Overloading, Operator Overloading, Type Conversions in C++. Dynamic memory allocation in C++\n\n");
      printf("Unit-IV\nInheritance: Inheritance, single Inheritance, Multiple Inheritance, Multi level inheritance, hierarchical inheritance, hybrid inheritance, Virtual base classes, Virtual functions, function overriding .Generic programming with templates: Class templates, Function Templates. \n\n");
      printf("Unit-V\nException Handling and Files: Exceptions, Types of Exceptions, throwing and catching exceptions. Streams and Files: Opening and closing a file, File Pointers and their Manipulations, sequential Input and Output Operations, multi-file Programs, Command Line Arguments.\n");
   }
   else if (d==4)
   {
      printf("Unit-1\nIntroduction to Software: Definitions to know the meaning of Software Engineering .Need to discuss Importance of software engineering , The Software evolution, Software characteristic, Goals of Software Engineering, Software development life-cycle: Requirement analysis, software design, coding, testing and maintenance. \n\n");
      printf("Unit-II\nSoftware Models and Software requirement SpecificationWater fall Model: Introduction, Diagram, Characteristics, Strengths. Weakness Prototyping model: Diagram, Characteristics, and Strengths Weakness. Iterative development model: Diagram, Characteristics, Strengths, Weakness. Spiral model: Diagram, Characteristics, Strengths, Weakness.  Types of requirements, functional and non-functional requirements, requirement engineering, requirement engineering process. Requirements elicitation, Requirement Validation, SRS Document –Goals, properties and characteristics of SRS documents, \n\n");
      printf("Unit-III \nSystem Design What is software design, Importance of design, objective of design and comparison of good and bad design, Design framework ,Problem partitioning, Abstraction, Top down and Bottom up – design, Cohesiveness, coupling \n\n");
      printf("Unit-IV\nCoding: Top-down and bottom-up, structure programming, information hiding, and programming style.Testing: levels of testing, functional testing, structural testing, test plane, test case specification, reliability assessment, Software testing strategies, Verification and validation, Unit, Integration Testing, Top down and bottom up integration testing, Alpha and Beta \n\n");
      printf("Unit-V \nSoftware MaintenanceSoftware maintenance definitions, need for software maintenance, categories of maintenance, software maintenance process models, techniques for reducing need of software maintenance. \n\n");

   }
   else  if (d==5)
   {
      printf("Unit-I\nIntroduction, Binary numbers, Base-conversions, Octal and hexadecimal numbers, Binary codes, Concept of fixed and floating point numbers, Complement Number Representation, Addition, Subtraction, Multiplication, and Division. Review of Boolean algebra, De-Morgan's Theorems, Boolean functions and representation in canonical and standard forms, SOP and POS forms. \n\n");
      printf("Unit-II\nDigital Logic Gates,IC Digital Logic Families, Karnaugh Map Method: 3 variable , 4 variable, 5 variable Map, limitations of K-maps for larger variables, POS-simplification, NAND/NOR implementation, other 2-level implementations, Don’t-care conditions, Tabular method. \n\n");
      printf("Unit-III\nCombinational Logic Circuits: Problem formulation and design of Basic Combinational Logic Circuits, Combinational Logic Using Universal Gates. Basic Adders, ALU, Parity-Checkers and Generators, Comparators, Decoders, Encoders, Code Converters, Multiplexer (Data Selector), De-multiplexers \n\n");
      printf("Unit-IV\nSequential Circuits: Latches, Flip-flops (SR, JK, T, D, Master/Slave FF, ) Edge-Triggered Flip-Flops, Flip-Flop Operating Characteristics, Basic Flip-Flop Applications, Asynchronous Counter Operation, Synchronous Counter Operation, Up/Down Synchronous Counters. \n\n");
      printf("Unit-V\nShift registers & Memories, Shift Register Functions, Serial In - Serial Out Shift Registers, Serial In - Parallel Out Shift Registers, Parallel In - Serial Out Shift Registers, Parallel In - Parallel Out Shift Registers, Bidirectional Shift Registers, Basics of Semiconductor Memories, Random-Access Memories (ROM), Read Only Memories (ROMs), Programmable ROM's (PROMs and EPROM's), PAL, PLA. \n\n");
   }
   else if (d==6)
   {
      printf("Unit-I\nEntrepreneurship Development: Meaning, Objectives, Type of Entrepreneurs, Importance of Entrepreneurship Training, Factors affecting Entrepreneurship, Linkage between Entrepreneurship and Economic Development, Problem of Increasing Unemployment, Balanced Regional Growth, Harnessing Locally Available Resources, New Industrial Policy and Innovation in Enterprises\n\n");
      printf("Unit-II\nEntrepreneurship Support System: Small Industries Development Bank of India, Small Industries Service Institute, State Small Industries and Export Corporation, District Industrial Centers and other Supporting Agencies. \n\n");
      printf("Unit-III\nProject Report Preparation: Identifying Business Opportunities, Project Report and its Importance, Various Contents of Project Report: Managerial and Entrepreneurial Capabilities, Socio-Economic Benefits, Demand Analysis, Technical Feasibility and Financial Viability. \n\n");
      printf("Unit-IV\nIntroduction to Marketing Management: Brief Introduction to various types of Product Strategies, Pricing Strategies, Channel Strategies and Promotional Strategies. Introduction to Production Management: Types of Production Systems, Production Planning and Control, Functions of Production Manager and Materials Management.\n\n");
      printf("Unit-V\nIntroduction to Human Resource Management: Manpower Planning, Recruitment, Selection, Placement and Induction, Training and Development, Compensation. Introduction to Financial Management: Source of Finance and Working Capital Management.\n\n ");
   }
   else 
   {
      printf ("sorry!!!\nretry\nplease contact owais toheed \ne-mail   owaistohe@gmail.com");
   }

   }
   else if (a==4)
   {
       printf ("welcome to 4th semester");
       int e;
    printf ("\nThere are 6 subject in 2nd semester\neg. entre 1 show (Discrete Mathematics ) syllabus \n    entre 2 show (Python Programming) syllabus\n    entre 3 show (Computer Organization & Architecture) syllabus   \n    entre 4 show (Database Management System)\n    entre 5 show (Operating System) syllabus \n    entre 6 show (Management Information System ) syllabus \n\nENTRE THE SUBJECT NO.\n");
    scanf("%d",&e);
    if (e==1)
    {
        printf("Unit-I \nSet Theory and Functions: Basic concepts, Venn diagram, Set Operations, principle of Inclusion and Exclusion, Relation types of relations, properties of relation, Function: definition and notation, one to one, onto, one to one and onto, composition of functions. \n\n");
        printf("Unit-II \nLogic: Propositional Calculus-Statements and Notations, Logical operators, Connectives and Truthtables, Bi-conditional statements, Tautologies, Duality Law. \n\n");
        printf("Unit –III \nGraphs: Definitions and examples of graphs Incidence and degree, Handshaking lemma, Isomorphism Sub-graphs, Weighted Graphs, Eulerian Graphs, Hamiltonian Graphs Walks, Paths and Circuits, Shortest Path Algorithm, Fleury’s and Dijsktra’s Algorithm, Chinese Postman problem. \n\n");
        printf("Unit-IV \nTrees: Definition and properties of trees Pendent vertices centre of a tree Rooted and binary tree, spanning trees, minimal spanning tree, Prim’s and Kruskal’s Algorithms’ for minimal cost spanning tree. \n\n");
        printf("Unit-V \nPlanar Graphs & Matrix Representation of Graphs: Definition of planar graph, Euler’s theorem for planar graph, Kuratowski’s graphs, Incidence, Adjacency Matrices and their properties.\n\n ");
    }
    else if (e==2)
    {
        printf("Unit-I \nIntroduction to Python: Introduction to Python, History of python, Status of python, Installation and Working with Python, Understanding Python variables, Python basic Operators, Understanding python blocks. \nPython Data Types: Declaring and using Numeric data types: int, float, complex, Using string data type and string operations, Defining list and list slicing, Use of Tuple data type, Working with sequence. \nPython Program Flow Control: Conditional blocks using if, else and else if, Simple for loops in python For loop using ranges, string, list and dictionaries, Use of while loops in python, Loop manipulation using pass, continue, break and else Programming,using Python conditional and loops block.\n\n");
        printf("Unit-II\nPython Functions, Modules and Packages: Organizing python codes using functions, organizing python projects into modules, Importing own module as well as external modules, Understanding Packages, Powerful Lamda function, Programming using functions, modules and external packages Python String, List and Dictionary Manipulations: Building blocks of python programs, Understanding string in build methods, List manipulation using in build methods, Dictionary manipulation, Programming using string, list and dictionary in build function \n\n");
        printf("Unit-III \nPython Object Oriented Programming –Concept of class, object and instances, Constructor, class attributes and destructors, Real time use of class in live projects, Inheritance, overlapping and overloading operators, Adding and retrieving dynamic attributes of classes, Programming using Oops support.\nMultithreading: Understanding threads, Forking threads, Synchronizing the threads, Programming using multithreading.Interfacing with the OS: Working with System (sys Module), Working with Operating System (os module).\n\n");
        printf("Unit-IV\nPython File Operation: Reading config files in python, Writing log files in python, Understanding read functions, read(), readline() and readlines(), Understanding write functions, write() and writelines(), Manipulating file pointer using seek, Programming using file operations. Python Regular Expression: Powerful pattern matching and searching, Power of pattern searching using regex in python, Real time parsing of networking or system data using regex, Password, email, url validation using regular expression, Pattern finding programs using regular expression \n\n");
        printf("Unit-V\nPython Exception Handling: Avoiding code break using exception handling, Safe guarding file operation using exception handling, Handling and helping developer with error code, Programming using Exception handling, Built-in exception. Python Database Interaction: SQL Database connection using python, Creating and searching tables, Reading and storing config information on database, Programming using database connections \n\n");
    }
    else if (e==3)
    {
        printf ("Unit-I\nBasic structure of computer: Basics of Computer Architecture and Organization, Stored Program Organization (Von Neumann Architecture), Instruction Formats, Addressing Modes, Stack and Queue Organization. \n\n");
        printf("Unit-II\nArithmetic: Integer and Floating-Point Representation, Fixed Point Arithmetic: Addition, Subtraction, Multiplication and Division With Flowcharts and Hardware Implementations, Floating Point Arithmetic: Addition and Subtraction. \n\n");
        printf("Unit-III\nBasic Processing Unit: Fundamental Concepts: Single Bus Organization, Execution of a Complete Instruction, Multiple Bus Organization, Hard-Wired & Micro-Programmed Control Units, Hard-Wired Design Methods, State Table Method, Multiplier Control, Control Memory, Address Sequencing, Instruction Pipeline. \n\n");
        printf("Unit-IV\nMemory systems: Memory Hierarchy, Main Memory: RAM, ROM, PROM, EPROM,EEPROM, Virtual Memory Concepts, Virtual Memory Address Translation, Interleaved Memories, Cache Memory: Mapping Functions, Replacement Algorithm, Secondary Storage: Magnetic Hard Disks. \n\n");
        printf ("Unit-V\nInput/output Organization: Accessing I/O Devices, Input/output Mechanism: Memory-Mapped I/O, Programmed I/O, Interrupts, Direct Memory Access, Standard I/O Interfaces: PCI Bus, SCSI Bus and USB. \n\n");
    }
    else if (e==4)
    {
      printf (" Unit-I \nIntroduction: Drawbacks of Files Management System, Database System Concepts and Architecture, Data Abstraction, Schemas and Instances, Data Independence, Data Models, Database Language and Interface, DDL, DML, Overall Data Base Structure. Data Modeling Using Entity Relationship Model: E.R. Model Concept, Notation for ER Diagrams, Mapping Constraints, Weak and Strong Entity Types, Keys, Concept of Super Key, Candidate Key, Primary Key, Extended ER Model, Specialization, Generalizations, Aggregation.\n\n");
      printf("Unit-II \nRelational Data Model And Language: Relational Data Model Concepts, Keys Constraints, Integrity Constraints, Domain Constraints, Referential Integrity, Assertions, Triggers, Relational Algebra, Relational Calculus, Domain and Tuple Calculus.\n\n" );
      printf("Unit-III \nIntroduction To SQL: SQL Data Type and Literals, Types of SQL Commands, SQL Operations (DDL, DML, and DCL), Tables, Views and Indexes, Queries and Nested Sub queries, Aggregate and Scalar Functions, Joins, Unions, Intersection, Minus, Triggers, Cursors, Procedures and Functions in SQL.\n\n");
      printf("Unit-IV \nData Base Design And Normalization: Functional Dependencies, Armstrong’s Axioms, Normalization: First, Second and Third Normal forms, BCNF, Multi-Valued Dependencies, Fourth Normal form, Join Dependencies and Fifth Normal form, DKNF, Decomposition, Dependency Preservation and Lossless Join.\n\n");
      printf("Unit-V \nTransaction & Concurrency Control: Transaction Concept, Transaction State, Schedules, Serializability of Schedules, Conflict & View Serializability, Testing of Serializability, Recoverability, Recovery From Transaction Failures, Log Based Recovery, Checkpoints, Shadow Paging, Recovery with Concurrent Transactions. Concurrency Control Techniques: Concurrency Control, Lock Based Protocols, Timestamp-Based Protocols, Validation-Based Protocols, Multiple Granularity, MultiVersion Schemes, Deadlock Handling \n\n");
    }
    else if (e==5)
    {
        printf ("Unit-I\nIntroduction: Introduction to Operating System, History of Operating System and Function, Evolution of Operating System, Batch Systems, Time Sharing and Real Time System, System Protection and Methods. Operating System Structure: System Components, System Structure. \n\n");
        printf("Unit-II\nProcess Management: Process concept, Process states, Principle of Concurrency, Semaphores and itstypes.Process Scheduling, Process Synchronization, Classical problems in Concurrency, Producer Consumer, Critical Section and readers writers problem, Producer Consumer Problem, Inter Process Communication, Process Generation, Resident Monitors.\n\n");
        printf("Unit-III\nCPU Scheduling: Scheduling Concept, levels of Scheduling, Scheduling Algorithms, Multiprocessor Scheduling. \nDeadlock:System Model, Shared resource, Resource allocation and Scheduling, Resource allocation graph, Deadlock Characterization, Prevention, Detection and Recovery. \n\n");
        printf("Unit-IV\nMemory Management: Multiprogramming with Fixed Partition and Variable Partition, Multiple Base Register, Paging, Demand Paging, Segmentation, Virtual Memory Concept, Allocation of Frames, Paged Replaced Algorithm, Thrashing, Cache Memory Concept. \n\n");
        printf("Unit-V\nI/O Management: I/O Devices and Organization of I/O Function, I/O Buffering, DISKI/O, Disk Scheduling algorithms and Operating System Design Issues. File System: File Concept, File Organization and Access Mechanism, File Directories, File Sharing. Unix and Linux Operating System as case studies, Time OS and Mobile OS. \n\n");
    }
    else if (e==6)
    {
        printf(" Unit-I \nIntroduction: Definition and Importance of MIS, Evolution of MIS, Concept of MIS, Function of MIS, Characteristics of MIS, Managerial Functions, Management Hierarchy, System: Elements of a system, Cybernetic System. \n\n");
        printf ("Unit-II \nStructure of MIS:MIS structure based on Operating Elements, MIS structure based on Decision Support, MIS structure based on Management Activities, MIS structure based on Organizational Function, Synthesis of MIS Structure: Conceptual and Physical Structure.\n\n");
        printf("Unit-III \nClassification of MIS & Information Concept: MIS Classification: Operation Support System, Management Support System and Other Support System. Data and Information, Characteristics of Information, Quality of Information, Classification of Information: John Dearden Classification, Classification in terms of Application and Classification on the basis of usage. Methods of Data and Information Collection, Methods to Avoid misuse of Information. \n\n");
        printf("Unit-IV \nDecision-Making and DSS: Types of Decisions: Purpose of Decision Making, Level of programmability, Knowledge of outcomes. Decision Making Models: Simon’s Model of Decision Making and Implicit Favorite Model. Decision Support System: Elements of DSS, Objective of DSS, Characteristics of DSS, Classification of DSS. \n\n");
        printf("Unit-V \nEnterprise Resource Planning: Introduction, Main Features of ERP, Evolution of ERP, General Model of ERP, Benefits of ERP, Role of Consultants ,Vendors and Users in ERP,ERP Implementation Methodology.  \n\n ");
    }
    else 
    {
        printf ("sorry!!!\nretry\nplease contact owais toheed \ne-mail   owaistohe@gmail.com");
    }
   }
   else if (a==5)
   {
       printf ("welcome to 5th semester");
    int f;
    printf ("\nThere are 6 subject in 2nd semester\neg. entre 1 show (Theory of Automata ) syllabus \n    entre 2 show (Computer Networks ) syllabus\n    entre 3 show (Java Programming) syllabus   \n    entre 4 show (Microprocessors and Interfacing  )\n    entre 5 show (Data Warehousing and Data Mining ) syllabus \n    entre 6 show ( Software Project Management  ) syllabus\nentre 7 show(Open Elective –I Courses ) \n\nENTRE THE SUBJECT NO.\n");
    scanf("%d",&f);
    
        if (f==1)
        {
            printf("Unit-I\nIntroduction: Alphabets, Strings and Languages; Automata and Grammars. Machines: Basic Machine, FSM, Transition Graph, Transition Matrix, Deterministic and NonDeterministic FSM, Equivalence of DFA and NDFA, Mealy & Moore Machines, Minimization of Finite Automata, Two-Way Finite Automata. \n\n");
            printf("Unit-II\n Regular Sets and Regular Grammars: Regular Sets, Finite Automata and Regular Expression, Pumping Lemma and Regular Sets, Application of Pumping Lemma, Closure Properties of Regular Sets. \nFormal Grammars & Languages: Basic Definitions and Examples of Languages, Chomsky Hierarchy, Regular Grammars, Context Free & Context Sensitive Grammars, Normal Forms -CNF and GNF, Binary Operations on Languages.\n\n"); 
            printf("Unit-III\nPushdown Automata: Formal Definition, Behavior and Graphical Notation, Instantaneous Descriptions and Language of PDA. Equivalence of PDAS and CFGS. Linear Bounded Automata: Context Sensitive Language and Linear Bounded Automata \n\n");
            printf("Unit-IV\nTuring Machines: TM Model, Representation and Languages Acceptability of TM. Design of TM, Universal TM & Other Modification, Composite & Iterated TM. Properties of Recursive & Recursively Enumerable Languages, Universal Turing Machine and Undecidable Problem. \n\n");
            printf("Unit-V\nDecidability: Post's Correspondence Problem, Rice’s Theorem, Decidability of Membership, Emptiness and Equivalence Problems of Languages. Time and Tape Complexity Measures of Turing Machines, Random Access Machines, the Classes P and NP, NP-Completeness, Satisfiability and Cook's Theorem.\n\n");
        }
        else if (f==2)
        {
            printf("Unit- I \nIntroduction to computer networks: Network–Component, Categories and Topologies Transmission Media – Reference Models: ISO/OSI Model and TCP/IP Model. Physical Layer: Digital and analog Signals, Periodic Analog Signals, Transmission Impairments, Digital data transmission techniques, Analog data transmission techniques, Multiplexing and Spread Spectrum.\n\n");
            printf("Unit-II \nData Link Layer: Error–Detection and Correction–Parity–LRC-CRC–Hamming Code–Flow Control and Error Control – Stop and wait – ARQ – Sliding window – HDLC –Multiple Access Protocols –IEEE 802.3 Ethernet. \n\n");
            printf("Unit-III \nNetwork Layer: Packet Switching and Datagram approach–IP addressing methods- IPv4 and IPv6–Sub netting – Routing– Distance Vector Routing – Link State Routing – Broadcast and Multicast Routing, Bellman ford routing. \n\n");
            printf("Unit-IV \nTransport Layer: Transport Services–UDP -TCP - Congestion Control–Quality of Services (QOS) Application Layer: Domain Name Space (DNS) – Electronic Mail – WWW-TELNET – EMAIL – File transfer WWW – HTTP – SNMP, Application Layer Protocols. \n\n");
            printf("Unit-V \nNetwork Security: Introduction to Cryptography- Public key and Private key cryptographyAuthentication- Digital Signatures and Certificates – Firewalls.\n\n ");
        }
        else if (f==3)
        {
            printf(" Unit-I \nOverview of JAVA: Introduction to Java, Features of Java, Object Oriented Concepts, Lexical Issues, Data Types, Variables, Arrays, Operators, Java Virtual Machine, Byte code, Control Statements: Selection, Iteration and Jump Statements, Java Bean Standards.\n\n"); 
            printf("Unit-II\n Classes And Inheritance: Classes, Objects, Constructors, Overloading Method, Access Control, Static and Final Keywords, Nested and Inner Classes, Abstract Class, Object Class, Inheritance, Overriding Methods, Using Super, Dynamic method Dispatch. Packages, Access Protection, Importing Packages, Interfaces.\n\n"); 
            printf("Unit-III \nException Handling And Multithreading: Exception Handling, Multiple Catch Clauses, Nested Try and Throw. Multithreading: Thread, Creating a Thread, Creating Multiple Threads, Synchronization, Inter Thread Communication, Deadlock, Suspending, Resuming and Stopping Threads, Multithreading. \n\n");
            printf("Unit-IV \nI/O, Applets And String Handing Files: Files, Stream Classes, Serialization, Reading Console Input, Writing Console Output, Print Writer Class, Reading and Writing Files, Transient And Volatile Modifiers, Instance Of, Strictfp, Native Methods. Applets: Introduction: Applet Fundamentals, Applet Architecture. Strings: String Constructors, String Operations, String Buffer, String Builder, Sting Tokenizer. \n\n");
            printf("Unit-V Collections Framework: Collections Overview, Collection Interfaces, Collection Classes, Accessing a Collection via Iterator, Map Classes and Map Interfaces, Comparators, Arrays, Legacy Classes and Interfaces, Wrapper Classes.\n");
        }
        else if (f==4)
        {
            printf(" Unit-I \nIntroduction to 8085: History and Evolution, types of microprocessors, 8085 Microprocessor, Architecture, Bus Organization, Registers, ALU, Control section, Instruction set of 8085, Instruction format, Addressing modes, Types of Instructions. \n\n");
            printf("Unit-II \n8085 Assembly Language Programming and Interrupts: Assembly language programming in 8085, Microprocessor timings, Machine cycles, T states, Timing diagram for different machine cycles.Interrupts in 8085, RST instructions,multiple interrupts and priorities, Interrupt handling in 8085 with RIM and SIM, Enabling, disabling and masking of interrupts \n\n");
            printf("Unit-III \n8085 Interfacing: Parallel data transfer using 8155. Programmable parallel ports and handshake input/output, Asynchronous and Synchronous data transfer using 8251A. DMA transfer, cycle stealing and burst mode of DMA, 8257 DMA Controller. Interfacing of keyboard, LED and seven segment displays with 8085. \n\n");
            printf("Unit-IV \n8086 Microprocessor: Overview of 8086 features, architecture of 8086: execution unit and bus interface unit, flags and general purpose register, 8086 pin diagram, Memory segmentation, Minimum and Maximum mode operation, Addressing modes. \n\n");
            printf("Unit-V \n8086 Assembly Language Programming and Interrupts: 8086 instruction set, assembler directives, macros. Assembly language programming involving arithmetic, logical, branch & call instructions, string manipulations. 8086 interrupts.\n\n");
        }
        else if (f==5)
        {
            printf("Unit-I\nIntroduction: Sources, Users, Applications and Goals of a Data Warehouse, Components of a Data Warehouse, Operational Data Store, Dimensional Modeling: Fact and Dimension Tables, Star, Snowflake and Hybrid Schemas, Confirmed Facts and Dimensions. Slowly Changing Dimensions, Casual Dimensions, Helper Tables and Surrogate Keys. \n\n");
            printf("Unit-II\nData Warehouse: Characteristics of a Data Warehouse, Software Architecture and Design, Data Granularity Model, Data Warehouse Bus Architecture. Meta Data: Need and Types of Metadata, Metadata Process Concept. Data Marts and its Characteristics, Comparison between OLTP and OLAP. \n\n");
            printf("unit-III\nDecision Support System (DSS): Using Data Warehouse for DSS, Techniques and Solutions for constructing a Central Data Warehouse, Data Extraction, Cleanup, and Transformation Tools, Managing a Data Warehouse Environment. \n\n");
            printf("Unit-IVData Mining: Introduction to Data Mining and Uses, Data Mining Functionalities, Classification of Data Mining Systems, Data Mining Task Primitives. Association Rules: Association rules mining, Mining Association rules from single level, multilevel transaction databases, multidimensional relational databases and data warehouses, Co-relational analysis, Constraint based association mining.\n\n");
            printf("Unit-V Classification and Clustering: Classification and prediction, decision tree induction, Bayesian classification, k-nearest neighbor classification, rule based classification, classification of back propagation, support vector machines, associative classification, cluster analysis, types of data in clustering, categorization of clustering methods, genetic algorithms and data visualization concepts. \n\n");
        }
      else if (f==6)
        {
           printf("Unit-I\n Introduction and software project planning: Fundamentals of Software Project Management (SPM), Need Identification, Vision and Scope document, Project Management Cycle, SPM Objectives, Management Spectrum, SPM Framework, Software Project Planning, Planning Objectives, Project Plan, Types of project plan, Structure of a Software Project Management Plan, Software project estimation, Estimation methods, Estimation models, Decision process. \n\n");
           printf("Unit-II \nProject organization and scheduling: Project Elements, Work Breakdown Structure (WBS), Types of WBS, Functions, Activities and Tasks, Project Life Cycle and Product Life Cycle, Ways to Organize Personnel, Project schedule, Scheduling Objectives, Building the project schedule, Scheduling terminology and techniques, Network Diagrams: PERT, CPM, Bar Charts: Milestone Charts, Gantt Charts. \n\n");
           printf("Unit-III\n Project monitoring and control: Dimensions of Project Monitoring & Control, Earned Value Analysis, Earned Value Indicators: Budgeted Cost for Work Scheduled (BCWS), Cost Variance (CV), Schedule Variance (SV), Cost Performance Index (CPI), Schedule Performance Index (SPI), Interpretation of Earned Value Indicators, Error Tracking, Software Reviews, Types of Review: Inspections, Desk- checks, Walkthroughs, Code Reviews, Pair Programming. \n\n");
           printf("Unit-IV \nSoftware quality assurance and testing: Testing Objectives, Testing Principles, Test Plans, Test Cases, Types of Testing, Levels of Testing, Test Strategies, Program Correctness, Program Verification & validation, Testing Automation & Testing Tools, Concept of Software Quality, Software Quality Attributes, Software Quality Metrics and Indicators, The SEI Capability Maturity Model CMM), SQA Activities, Formal SQA Approaches: Proof of correctness, Statistical quality assurance, Clean-room process. \n\n");
           printf("Unit-V \nProject management and project management tools: Software Configuration Management: Software Configuration Items and tasks, Baselines, Plan for Change, Change Control, Change Requests Management, Version Control, Risk Management: Risks and risk types, Risk Breakdown Structure (RBS), Risk Management Process: Risk identification, Risk analysis, Risk planning, Risk monitoring, Cost Benefit Analysis, Software Project Management Tools: CASE Tools, Planning and Scheduling Tools, MS-Project.\n\n ");
        }
     else if (f==7)
        {
            printf("Open Elective –I Courses ");
        }
        else 
        {
            printf ("sorry!!!\nretry\nplease contact owais toheed \ne-mail   owaistohe@gmail.com");
        }
     



   }
   else if (a==6)
   {
       printf ("welcome to 6th semester");
       int g;
    printf ("\nThere are 6 subject in 2nd semester\neg. entre 1 show ( Compiler Design ) syllabus \n    entre 2 show (Computer Graphics & Multimedia) syllabus\n    entre 3 show (Design & Analysis of Algorithms) syllabus   \n    entre 4 show (Professional Elective-II)\n    entre 5 show (Professional Elective-III ) syllabus \n    entre 6 show (Open Elective-II  ) syllabus \n\nENTRE THE SUBJECT NO.\n");
    scanf("%d",&g);
    if (g==1)
    {
        printf("Unit-I \nIntroduction to Compiler: Phases and passes, Bootstrapping, Finite state machines and regular expressions and their applications to lexical analysis, Implementation of lexical analyzers, lexicalanalyzer generator, Lex compiler, compiler construction tools, YACC. The syntactic specification of programming languages: Context free grammars, derivation and parse trees, capabilities of CFG.\n\n"); 
        printf("Unit-II \nBasic Parsing Techniques: Parsers, Shift reduce parsing, operator precedence Parsing, top down parsing, predictive parsers Automatic Construction of efficient Parsers: LR parsers, the canonical Collection of LR (0) items, constructing SLR parsing tables, constructing Canonical LR parsing tables, Constructing LALR parsing tables, using ambiguous grammars, an automatic parser generator, implementation of LR parsing tables, constructing LALR sets of items.\n\n");
        printf("Unit-III\n Syntax-Directed Translation: Syntax-directed Translation schemes, Implementation of Syntaxdirected Translators, Intermediate code, postfix notation, Parse trees & syntax trees, three address code, quadruple & triples, translation of assignment statements, Boolean expressions, statements that alter the flow of control, postfix translation, translation with a top down parser. \n\n");
        printf("Unit-IV \nSymbol Tables: Data structure for symbols tables, representing scope information. Run-Time Administration: Implementation of simple stack allocation scheme, storage allocation in block structured language. Error Detection & Recovery: Lexical Phase errors, syntactic phase errors semantic errors. \n\n");
        printf("Unit-V Introduction To Code Optimization: Loop optimization, the DAG representation of basic blocks, value numbers and algebraic laws, Global Data-Flow analysis. Implementation of a subset of C using YACC. \n\n");
    }
    else if (g==2)
    {
        printf("Unit–I \nBasic Of Computer Graphics: Introduction to computer graphics, Applications of computer graphics, Display devices, Raster scan systems, Graphics input devices, Graphics software and standards.\n\n");
        printf("Unit–II\n Graphics Primitives: Points, lines, circles as primitives, scan conversion algorithms for primitives, Fill area primitives including scan-line polygon filling, inside-outside test, boundary and flood-fill, character generation, line attributes.\n\n");
        printf("Unit–III \n2d Transformation And Viewing: Transformations, matrix representation, homogeneous coordinates, composite transformations, reflection and shearing, viewing pipeline and coordinates system, windowto-viewport transformation, clipping including point clipping, line clipping, polygon clipping.\n\n");
        printf("Unit–IV\n 3d Concepts And Object Representation:3D display methods, polygon surfaces, tables, equations, curved lies and surfaces, spline representation, cubic spline interpolation methods, Bazier curves and surfaces, B-spline curves. 3D transformation and viewing: 3D scaling, rotation and translation, composite transformation, viewing pipeline and coordinates, parallel and perspective transformation.\n\n");
        printf("Unit–V\n Introduction To Multimedia: Introduction to multimedia, Multimedia computer system, Multimedia components, Multimedia terminology: communication modes, media types, Multimedia networks, Applications of multimedia, distributed multimedia systems, Synchronization\n\n");
    }
    else if (g==3)
    {
       printf(" Unit-I Introduction To Algorithm: Areas of Study of Algorithms, Algorithm Design Paradigms, Concept of Algorithmic Efficiency, Run Time Analysis of Algorithms, Asymptotic Notations (O, Ω, Θ). Divide and Conquer: Structure of Divide and Conquer Algorithms: Examples; Binary Search, Finding the Maximum and Minimum, Merge Sort, Quick Sort, Strassen’s Matrix Multiplication; Analysis of Divide and Conquer Run Time Recurrence Relations.\n\n");
       printf(" Un1it-II Greedy Method: Overview of the Greedy Paradigm, Examples of Exact Optimization Solution Minimum Cost Spanning Tree Using Prim’s and Kruskal’s Algorithms), Approximate Solution (Knapsack Problem), Single Source Shortest Paths.\n\n");
       printf(" Unit-III Dynamic Programming: Overview, Difference between Dynamic Programming and Divide and Conquer, Applications: Shortest Path In Graph (Multistage Graph, All-Pairs Shortest Paths, SingleSource Shortest Paths: General Weights), Matrix Chain Multiplication, Traveling Salesman Problem, Longest Common Sub-sequence Problem.\n\n");
       printf("Unit-IV Graph Searching And Traversal: Overview, Binary Tree Traversal, Graph Traversal Methods (Depth First and Breadth First Search). Back Tracking: Overview, 8-Queens Problem, 0/1 Knapsack Problem.\n\n");
       printf("Unit-V Branch And Bound: LC Searching, Bounding, FIFO Branch and Bound, LC Branch and Bound Application: 0/1 Knapsack Problem, Traveling Salesman Problem. Basic Concepts of Complexity Classes P, NP, Polynomial vs. Non-Polynomial Time Complexity, Reducibility, NP-Hard and NPComplete Classes.\n\n");


    }
    else if (g==4)
    {
       printf("Professional Elective-II Courses ");
    }
    else if (g==5)
    {
        printf("Professional Elective-III Courses ");
    }
    else if (g==6)
    {
        printf("Open Elective-II");
    }
    else 
    {
         printf ("sorry!!!\nretry\nplease contact owais toheed \ne-mail   owaistohe@gmail.com");
    }

   }
   else if (a==7)
  {
      printf ("welcome to 7th semester");
      int h;
    printf ("\nThere are 6 subject in 2nd semester\neg. entre 1 show ( Major Project Phase-I based on Software Engineering) syllabus \n    entre 2 show (Fundamentals of Digital Image Processing) syllabus\n    entre 3 show (Artificial Intelligence ) syllabus   \n    entre 4 show (Professional Elective-IV)\n    entre 5 show (Professional Elective-V) syllabus \n    entre 6 show (Open Elective-III  ) syllabus \n\nENTRE THE SUBJECT NO.\n");
    scanf("%d",&h);
    if (h==1)
    {
        printf("During semester VII every student shall be allotted a Major Project-Phase-I based on Software Engineering under the supervision of an allotted mentor. Students are required to do preliminary exercise of survey of literature and preparation of a road map of the selected Project. Major Project Phase-I based on Software Engineering shall be evaluated as per university statues.\n\n");
    }
    else if (h==2)
    {
      printf("Unit-I \nIntroduction to Image Processing: Digital Image representation, Sampling & Quantization, Steps in image Processing, Image acquisition, color image representation. Intensity transform functions, histogram processing.\n\n");
      printf("Unit–II \nImage Filtering: spatial domain filtering, Fourier domain analysis: Fourier transforms and its properties, frequency domain filters, Homomorphism Filtering.\n\n");
      printf("Unit-III\nImage Compression: Coding redundancy, Inter-pixel redundancy, Psycho visual redundancy, Huffman Coding, Arithmetic coding, Lossy compression techniques, JPEG Compression.\n\n");
      printf("Unit-IV \nImage Morphological Processing: Introduction to basic operation on binary and grayscale images: Dilation, Erosion, Opening & Closing, Morphological Algorithms: Boundary & Region Extraction, Convex Hull, Thinning, Thickening, Skeletons, Pruning.\n\n");
      printf("Unit-V \nImage Segmentation, Representation & Descriptions: Point, Line and Edge Detection, thresholding, Edge and Boundary linking, Hough transforms, Region Based Segmentation, Contour following, Boundary representations, Region Representations, shape properties, Boundary Descriptors, Regional Descriptors, Texture representations, Object Descriptions\n\n");
    }
    else if (h==3)
    {
       printf(" Unit-I Artificial intelligence systems: Neural networks, fuzzy logic, genetic algorithms. Artificial neural networks: Biological neural networks, model of an artificial neuron, Activation functions, architectures, characteristics learning methods, brief history of ANN research- Early ANN architectures (basics only)-McCulloch & Pitts model, Perceptron, adaline, madaline. \n\n");
       printf(" Unit-II Back propagation networks: architecture, multilayer perceptron, back propagation learning-input layer, hidden layer, output layer computations, calculation of error, training of ANN, BP algorithm, momentum and learning rate, Selection of various parameters in BP networks. Variations in standard BP algorithms- Adaptive learning rate BP, resilient BP, Levenberg-Marquardt, and conjugate gradient BP algorithms (basic principle only)-Applications of ANN. \n\n");
       printf(" Unit-III Fuzzy logic: Crisp & fuzzy sets fuzzy relations fuzzy conditional statements fuzzy rules fuzzy algorithm. Fuzzy logic controller fuzzification interface knowledge base decision making logic defuzzification interface design of fuzzy logic controller case studies.\n\n");
       printf(" Unit-IV Genetic algorithms: Basic concepts, encoding, fitness function, Reproduction-Roulette wheel, Boltzmann, tournament, rank, and steady state selections, Elitism. Inheritance operators, Crossoverdifferent types, Mutation, Bit-wise operators, Generational cycle, Convergence of GA, Applications of GA case studies. Introduction to genetic programming-basic concepts. \n\n");
       printf(" Unit-V Hybrid soft computing techniques & applications: Neuro-fuzzy hybrid systems – genetic neuro hybrid systems – genetic fuzzy hybrid and fuzzy genetic hybrid systems simplified fuzzy ARTMAP, Applications: A fusion approach of multispectral images with SAR, optimization of traveling salesman problem using genetic algorithm approach, soft computing based hybrid fuzzy controllers. \n\n");

    }
    else if (h==4)
    {
        printf("Professional Electives-IV Courses ");
    }
    else if (h==5)
    {
        printf("Professional Elective-V");
    }
    else if (h==6)
    {
        printf("Open Elective-III ");
    }
    else
    {
        
        printf ("sorry!!!\nretry\nplease contact owais toheed \ne-mail   owaistohe@gmail.com");
    }
  }
  else if (a==8)
  {
      printf ("welcome to 8th semester");
      int i; 
    printf ("\nThere are 6 subject in 2nd semester\neg. entre 1 show ( Major Project Phase-II ) syllabus \n    entre 2 show (Professional Electives-VI Courses ) syllabus\n    entre 3 show ( Open Elective-IV) syllabus    \n\nENTRE THE SUBJECT NO.\n");
    scanf("%d",&i);
    if (i==1)
    {
        printf("The students are required to complete the Major Project-Phase II during semester VIII. Depending upon the infrastructure, computing and other laboratory facilities the students shall be offered in house project on campus or they can complete their project work in any organization/industry outside the campus. Major Project- Phase II shall be evaluated as per university statues.\n\n");
    }
    else if (i==2)
    {
        printf("Professional Electives-VI Courses");
    }
    else if (i==3)
    {
        printf("Open Elective-IV");
    }
    else 
    {
        printf ("sorry!!!\nretry\nplease contact owais toheed \ne-mail   owaistohe@gmail.com");
    }
  }
  else 
  {
      printf ("only 1 to 8 semester valid \nplease contact admin\nthanks");
  }

    return 0;
}