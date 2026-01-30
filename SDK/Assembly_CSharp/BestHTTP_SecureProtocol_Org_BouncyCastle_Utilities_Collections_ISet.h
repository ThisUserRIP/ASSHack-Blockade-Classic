#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections { struct IEnumerable; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections
{
	struct ISet
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void Add(mscorlib::System::Object* o);
		void AddAll(mscorlib::System::Collections::IEnumerable* e);
		void Clear();
		bool Contains(mscorlib::System::Object* o);
		bool get_IsEmpty();
		bool get_IsFixedSize();
		bool get_IsReadOnly();
		void Remove(mscorlib::System::Object* o);
		void RemoveAll(mscorlib::System::Collections::IEnumerable* e);
	};
}

