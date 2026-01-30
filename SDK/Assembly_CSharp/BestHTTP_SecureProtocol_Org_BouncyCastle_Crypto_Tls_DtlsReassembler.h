#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::Collections { struct IList; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	struct DtlsReassembler : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint8_t mMsgType;
		IL2CPP::Array<uint8_t>* mBody;
		mscorlib::System::Collections::IList* mMissing;
		void _ctor(uint8_t msg_type, int32_t length);
		uint8_t get_MsgType();
		IL2CPP::Array<uint8_t>* GetBodyIfComplete();
		void ContributeFragment(uint8_t msg_type, int32_t length, IL2CPP::Array<uint8_t>* buf, int32_t off, int32_t fragment_offset, int32_t fragment_length);
		void Reset();
	};
}

