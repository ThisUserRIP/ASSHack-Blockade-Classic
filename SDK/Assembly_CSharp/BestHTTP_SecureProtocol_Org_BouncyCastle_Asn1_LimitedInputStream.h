#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Utilities_IO_BaseInputStream.h"
namespace mscorlib::System::IO { struct Stream; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1
{
	struct LimitedInputStream : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::BaseInputStream
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::IO::Stream* _in;
		int32_t _limit;
		void _ctor(mscorlib::System::IO::Stream* inStream, int32_t limit);
		int32_t GetRemaining();
		void SetParentEofDetect(bool on);
	};
}

