#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IList; };
namespace mscorlib::System::Collections { struct IEnumerable; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Collections { struct IDictionary; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections { struct ISet; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections
{
	struct CollectionUtilities : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void AddRange(mscorlib::System::Collections::IList* to, mscorlib::System::Collections::IEnumerable* range);
		static bool CheckElementsAreOfType(mscorlib::System::Collections::IEnumerable* e, mscorlib::System::Type* t);
		static mscorlib::System::Collections::IDictionary* ReadOnly(mscorlib::System::Collections::IDictionary* d);
		static mscorlib::System::Collections::IList* ReadOnly(mscorlib::System::Collections::IList* l);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* ReadOnly(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* s);
		static mscorlib::System::Object* RequireNext(mscorlib::System::Collections::IEnumerator* e);
		static mscorlib::System::String* ToString(mscorlib::System::Collections::IEnumerable* c);
		void _ctor();
	};
}

