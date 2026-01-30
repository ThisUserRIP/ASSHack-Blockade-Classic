#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Utilities_IO_FilterStream.h"
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Cms_CmsTypedStream.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { struct CmsTypedStream; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::IO { struct Stream; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	struct CmsTypedStream_FullReaderStream : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::FilterStream
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::IO::Stream* input);
		int32_t Read(IL2CPP::Array<uint8_t>* buf, int32_t off, int32_t len);
	};
}

