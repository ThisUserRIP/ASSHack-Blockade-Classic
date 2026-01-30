#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::IO { struct Stream; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	struct CmsCompressedDataStreamGenerator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _bufferSize;
		struct StaticFields
		{
			mscorlib::System::String* ZLib;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void SetBufferSize(int32_t bufferSize);
		mscorlib::System::IO::Stream* Open(mscorlib::System::IO::Stream* outStream, mscorlib::System::String* compressionOID);
		mscorlib::System::IO::Stream* Open(mscorlib::System::IO::Stream* outStream, mscorlib::System::String* contentOID, mscorlib::System::String* compressionOID);
	};
}

