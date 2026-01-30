#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::IO { struct Stream; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	struct CmsTypedStream : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _oid;
		mscorlib::System::IO::Stream* _in;
		struct StaticFields
		{
			int32_t BufferSize;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::IO::Stream* inStream);
		void _ctor(mscorlib::System::String* oid, mscorlib::System::IO::Stream* inStream);
		void _ctor(mscorlib::System::String* oid, mscorlib::System::IO::Stream* inStream, int32_t bufSize);
		mscorlib::System::String* get_ContentType();
		mscorlib::System::IO::Stream* get_ContentStream();
		void Drain();
	};
}

