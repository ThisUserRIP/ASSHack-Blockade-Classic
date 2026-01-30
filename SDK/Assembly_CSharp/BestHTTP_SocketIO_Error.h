#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "BestHTTP_SocketIO_SocketIOErrors.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SocketIO
{
	struct Error : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SocketIO::SocketIOErrors _Code_k__BackingField;
		mscorlib::System::String* _Message_k__BackingField;
		Assembly_CSharp::BestHTTP::SocketIO::SocketIOErrors get_Code();
		void set_Code(Assembly_CSharp::BestHTTP::SocketIO::SocketIOErrors value);
		mscorlib::System::String* get_Message();
		void set_Message(mscorlib::System::String* value);
		void _ctor(Assembly_CSharp::BestHTTP::SocketIO::SocketIOErrors code, mscorlib::System::String* msg);
		mscorlib::System::String* ToString();
	};
}

