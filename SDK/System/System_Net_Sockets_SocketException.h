#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_ComponentModel_Win32Exception.h"
namespace System::System::Net { struct EndPoint; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "System_Net_Sockets_SocketError.h"
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "..\mscorlib\System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };

namespace System::System::Net::Sockets
{
	struct SocketException : System::ComponentModel::Win32Exception
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Net::EndPoint* m_EndPoint;
		static int32_t WSAGetLastError_internal();
		void _ctor();
		void _ctor(int32_t error, mscorlib::System::String* message);
		void _ctor(int32_t errorCode);
		void _ctor(System::Net::Sockets::SocketError socketError);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* serializationInfo, mscorlib::System::Runtime::Serialization::StreamingContext streamingContext);
		int32_t get_ErrorCode();
		mscorlib::System::String* get_Message();
		System::Net::Sockets::SocketError get_SocketErrorCode();
	};
}

