#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_Proxy.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System { struct Uri; };
namespace Assembly_CSharp::BestHTTP::Authentication { struct Credentials; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::IO { struct Stream; };
namespace Assembly_CSharp::BestHTTP { struct HTTPRequest; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Int32.h"

namespace Assembly_CSharp::BestHTTP
{
	struct SOCKSProxy : Assembly_CSharp::BestHTTP::Proxy
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(System::System::Uri* address, Assembly_CSharp::BestHTTP::Authentication::Credentials* credentials);
		mscorlib::System::String* GetRequestPath(System::System::Uri* uri);
		void Connect(mscorlib::System::IO::Stream* stream, Assembly_CSharp::BestHTTP::HTTPRequest* request);
		void WriteString(IL2CPP::Array<uint8_t>* buffer, int32_t& count, mscorlib::System::String* str);
		void WriteBytes(IL2CPP::Array<uint8_t>* buffer, int32_t& count, IL2CPP::Array<uint8_t>* bytes);
		mscorlib::System::String* BufferToHexStr(IL2CPP::Array<uint8_t>* buffer, int32_t count);
	};
}

