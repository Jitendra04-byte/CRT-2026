import java.rmi.*;

public interface Calc extends Remote {

    public int add(int a, int b)
    throws RemoteException;
}

import java.rmi.server.UnicastRemoteObject;
import java.rmi.*;

public class CalcImpl extends UnicastRemoteObject
implements Calc {

    CalcImpl() throws RemoteException {
        super();
    }

    public int add(int a, int b) {

        return a + b;
    }
}

import java.rmi.*;

public class Server {

    public static void main(String args[]) {

        try {

            CalcImpl obj = new CalcImpl();

            Naming.rebind("rmi://localhost/calc", obj);

            System.out.println("Server Started");

        } catch(Exception e) {

            System.out.println(e);
        }
    }
}

import java.rmi.*;

public class Client {

    public static void main(String args[]) {

        try {

            Calc obj =
            (Calc)Naming.lookup("rmi://localhost/calc");

            int result = obj.add(10, 20);

            System.out.println("Addition = " + result);

        } catch(Exception e) {

            System.out.println(e);
        }
    }
}