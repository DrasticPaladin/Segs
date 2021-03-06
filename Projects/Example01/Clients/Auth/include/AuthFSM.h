/*
 * SEGS - Super Entity Game Server
 * http://www.segs.io/
 * Copyright (c) 2006 - 2018 SEGS Team (see Authors.txt)
 * This software is licensed! (See License.txt for details)
 */

#pragma once

class AuthPacket;
class AuthConnection;
class AuthObserver;
class AuthFSM_Client
{
    AuthObserver *m_observer;
    public:
        AuthFSM_Client() {m_observer=0;}
        AuthPacket *ReceivedPacket(AuthConnection *caller,AuthPacket *pkt);
        AuthPacket *ConnectionEstablished(AuthConnection *conn);
        //static void SendError(AuthConnection *conn,int err);
        void ConnectionClosed(AuthConnection *conn);
        void set_observer(AuthObserver *ob);
        AuthObserver *get_observer();
};
