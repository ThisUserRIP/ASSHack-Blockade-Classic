#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Security_Cryptography_RSASignaturePaddingMode.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };

namespace mscorlib::System::Security::Cryptography
{
	struct RSASignaturePadding : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Security::Cryptography::RSASignaturePaddingMode _mode;
		struct StaticFields
		{
			mscorlib::System::Security::Cryptography::RSASignaturePadding* s_pkcs1;
			mscorlib::System::Security::Cryptography::RSASignaturePadding* s_pss;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::Security::Cryptography::RSASignaturePaddingMode mode);
		static mscorlib::System::Security::Cryptography::RSASignaturePadding* get_Pkcs1();
		static mscorlib::System::Security::Cryptography::RSASignaturePadding* get_Pss();
		mscorlib::System::Security::Cryptography::RSASignaturePaddingMode get_Mode();
		int32_t GetHashCode();
		bool Equals(mscorlib::System::Object* obj);
		bool Equals(mscorlib::System::Security::Cryptography::RSASignaturePadding* other);
		static bool op_Equality(mscorlib::System::Security::Cryptography::RSASignaturePadding* left, mscorlib::System::Security::Cryptography::RSASignaturePadding* right);
		static bool op_Inequality(mscorlib::System::Security::Cryptography::RSASignaturePadding* left, mscorlib::System::Security::Cryptography::RSASignaturePadding* right);
		mscorlib::System::String* ToString();
		static void _cctor();
		void _ctor();
	};
	bool operator==(mscorlib::System::Security::Cryptography::RSASignaturePadding& left, mscorlib::System::Security::Cryptography::RSASignaturePadding& right);
	bool operator!=(mscorlib::System::Security::Cryptography::RSASignaturePadding& left, mscorlib::System::Security::Cryptography::RSASignaturePadding& right);
}

