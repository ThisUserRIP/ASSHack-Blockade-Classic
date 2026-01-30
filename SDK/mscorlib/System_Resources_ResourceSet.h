#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Resources { struct IResourceReader; };
namespace mscorlib::System::Collections { struct Hashtable; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Collections { struct IDictionaryEnumerator; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Resources
{
	struct ResourceSet : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Resources::IResourceReader* Reader;
		mscorlib::System::Collections::Hashtable* Table;
		mscorlib::System::Collections::Hashtable* _caseInsensitiveTable;
		void _ctor();
		void _ctor(bool junk);
		void CommonInit();
		void Dispose(bool disposing);
		void Dispose();
		mscorlib::System::Collections::IDictionaryEnumerator* GetEnumerator();
		mscorlib::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
		mscorlib::System::Collections::IDictionaryEnumerator* GetEnumeratorHelper();
		mscorlib::System::String* GetString(mscorlib::System::String* name);
		mscorlib::System::String* GetString(mscorlib::System::String* name, bool ignoreCase);
		mscorlib::System::Object* GetObject(mscorlib::System::String* name);
		mscorlib::System::Object* GetObject(mscorlib::System::String* name, bool ignoreCase);
		mscorlib::System::Object* GetObjectInternal(mscorlib::System::String* name);
		mscorlib::System::Object* GetCaseInsensitiveObjectInternal(mscorlib::System::String* name);
	};
}

