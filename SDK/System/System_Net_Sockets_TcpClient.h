#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System::Net::Sockets { struct Socket; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System::Net::Sockets { struct NetworkStream; };
#include "System_Net_Sockets_AddressFamily.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct AsyncCallback; };
namespace mscorlib::System { struct Object; };

namespace System::System::Net::Sockets
{
	struct TcpClient : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Net::Sockets::Socket* m_ClientSocket;
		bool m_Active;
		System::Net::Sockets::NetworkStream* m_DataStream;
		System::Net::Sockets::AddressFamily m_Family;
		bool m_CleanedUp;
		void _ctor();
		void _ctor(System::Net::Sockets::AddressFamily family);
		System::Net::Sockets::Socket* get_Client();
		void set_Client(System::Net::Sockets::Socket* value);
		mscorlib::System::IAsyncResult* BeginConnect(mscorlib::System::String* host, int32_t port, mscorlib::System::AsyncCallback* requestCallback, mscorlib::System::Object* state);
		void EndConnect(mscorlib::System::IAsyncResult* asyncResult);
		void Dispose(bool disposing);
		void Dispose();
		void Finalize();
		void initialize();
	};
}

