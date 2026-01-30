#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct IDictionary; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { struct AttributeTable; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	struct DefaultAuthenticatedAttributeTableGenerator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::IDictionary* table;
		void _ctor();
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* attributeTable);
		mscorlib::System::Collections::IDictionary* CreateStandardAttributeTable(mscorlib::System::Collections::IDictionary* parameters);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* GetAttributes(mscorlib::System::Collections::IDictionary* parameters);
	};
}

