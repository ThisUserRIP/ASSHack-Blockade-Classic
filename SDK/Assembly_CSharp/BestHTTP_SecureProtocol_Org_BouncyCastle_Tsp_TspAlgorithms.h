#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections { struct IList; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp
{
	struct TspAlgorithms : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::String* MD5;
			mscorlib::System::String* Sha1;
			mscorlib::System::String* Sha224;
			mscorlib::System::String* Sha256;
			mscorlib::System::String* Sha384;
			mscorlib::System::String* Sha512;
			mscorlib::System::String* RipeMD128;
			mscorlib::System::String* RipeMD160;
			mscorlib::System::String* RipeMD256;
			mscorlib::System::String* Gost3411;
			mscorlib::System::String* Gost3411_2012_256;
			mscorlib::System::String* Gost3411_2012_512;
			mscorlib::System::String* SM3;
			mscorlib::System::Collections::IList* Allowed;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
	};
}

