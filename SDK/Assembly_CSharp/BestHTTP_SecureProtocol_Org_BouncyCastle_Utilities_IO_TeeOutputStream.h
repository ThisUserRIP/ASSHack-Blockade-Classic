#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Utilities_IO_BaseOutputStream.h"
namespace mscorlib::System::IO { struct Stream; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO
{
	struct TeeOutputStream : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::BaseOutputStream
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::IO::Stream* output;
		mscorlib::System::IO::Stream* tee;
		void _ctor(mscorlib::System::IO::Stream* output, mscorlib::System::IO::Stream* tee);
		void Close();
		void Write(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count);
		void WriteByte(uint8_t b);
	};
}

