#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System_Xml::System::Xml { struct XmlQualifiedName_HashCodeOfStringDelegate; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace System_Xml::System::Xml { struct XmlNameTable; };
namespace System_Xml::System::Xml { struct IXmlNamespaceResolver; };

namespace System_Xml::System::Xml
{
	struct XmlQualifiedName : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* name;
		mscorlib::System::String* ns;
		int32_t hash;
		struct StaticFields
		{
			System_Xml::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate* hashCodeDelegate;
			System_Xml::System::Xml::XmlQualifiedName* Empty;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(mscorlib::System::String* name);
		void _ctor(mscorlib::System::String* name, mscorlib::System::String* ns);
		mscorlib::System::String* get_Namespace();
		mscorlib::System::String* get_Name();
		int32_t GetHashCode();
		bool get_IsEmpty();
		mscorlib::System::String* ToString();
		bool Equals(mscorlib::System::Object* other);
		static bool op_Equality(System_Xml::System::Xml::XmlQualifiedName* a, System_Xml::System::Xml::XmlQualifiedName* b);
		static bool op_Inequality(System_Xml::System::Xml::XmlQualifiedName* a, System_Xml::System::Xml::XmlQualifiedName* b);
		static mscorlib::System::String* ToString(mscorlib::System::String* name, mscorlib::System::String* ns);
		static System_Xml::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate* GetHashCodeDelegate();
		static bool IsRandomizedHashingDisabled();
		static int32_t GetHashCodeOfString(mscorlib::System::String* s, int32_t length, int64_t additionalEntropy);
		void Init(mscorlib::System::String* name, mscorlib::System::String* ns);
		void SetNamespace(mscorlib::System::String* ns);
		void Verify();
		void Atomize(System_Xml::System::Xml::XmlNameTable* nameTable);
		static System_Xml::System::Xml::XmlQualifiedName* Parse(mscorlib::System::String* s, System_Xml::System::Xml::IXmlNamespaceResolver* nsmgr, mscorlib::System::String& prefix);
		System_Xml::System::Xml::XmlQualifiedName* Clone();
		static void _cctor();
	};
	bool operator==(System_Xml::System::Xml::XmlQualifiedName& a, System_Xml::System::Xml::XmlQualifiedName& b);
	bool operator!=(System_Xml::System::Xml::XmlQualifiedName& a, System_Xml::System::Xml::XmlQualifiedName& b);
}

