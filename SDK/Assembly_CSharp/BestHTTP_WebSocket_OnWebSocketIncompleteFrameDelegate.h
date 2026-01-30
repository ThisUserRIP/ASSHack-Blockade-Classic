#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_MulticastDelegate.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace Assembly_CSharp::BestHTTP::WebSocket { struct WebSocket; };
#include "BestHTTP_WebSocket_Frames_WebSocketFrameReader.h"
namespace Assembly_CSharp::BestHTTP::WebSocket::Frames { struct WebSocketFrameReader; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace Assembly_CSharp::BestHTTP::WebSocket
{
	struct OnWebSocketIncompleteFrameDelegate : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		void Invoke(Assembly_CSharp::BestHTTP::WebSocket::WebSocket* webSocket, Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrameReader frame);
		mscorlib::System::IAsyncResult* BeginInvoke(Assembly_CSharp::BestHTTP::WebSocket::WebSocket* webSocket, Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrameReader frame, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		void EndInvoke(mscorlib::System::IAsyncResult* result);
	};
}

