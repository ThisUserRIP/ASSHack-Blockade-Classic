#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System_Xml::System::Xml { struct SecureStringHasher_HashCodeOfStringDelegate; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };

namespace System_Xml::System::Xml
{
	struct SecureStringHasher : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t hashCodeRandomizer;
		struct StaticFields
		{
			System_Xml::System::Xml::SecureStringHasher_HashCodeOfStringDelegate* hashCodeDelegate;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		bool Equals(mscorlib::System::String* x, mscorlib::System::String* y);
		int32_t GetHashCode(mscorlib::System::String* key);
		static int32_t GetHashCodeOfString(mscorlib::System::String* key, int32_t sLen, int64_t additionalEntropy);
		static System_Xml::System::Xml::SecureStringHasher_HashCodeOfStringDelegate* GetHashCodeDelegate();
	};
}

