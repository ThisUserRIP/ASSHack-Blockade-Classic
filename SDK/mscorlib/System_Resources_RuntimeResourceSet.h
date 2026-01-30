#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Resources_ResourceSet.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "System_Resources_ResourceLocator.h"
namespace mscorlib::System::Resources { struct ResourceLocator; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace mscorlib::System::Resources { struct ResourceReader; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::IO { struct Stream; };
namespace mscorlib::System::Collections { struct IDictionaryEnumerator; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Resources
{
	struct RuntimeResourceSet : mscorlib::System::Resources::ResourceSet
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Resources::ResourceLocator>* _resCache;
		mscorlib::System::Resources::ResourceReader* _defaultReader;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Resources::ResourceLocator>* _caseInsensitiveTable;
		bool _haveReadFromReader;
		struct StaticFields
		{
			int32_t Version;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::String* fileName);
		void _ctor(mscorlib::System::IO::Stream* stream);
		void Dispose(bool disposing);
		mscorlib::System::Collections::IDictionaryEnumerator* GetEnumerator();
		mscorlib::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
		mscorlib::System::Collections::IDictionaryEnumerator* GetEnumeratorHelper();
		mscorlib::System::String* GetString(mscorlib::System::String* key);
		mscorlib::System::String* GetString(mscorlib::System::String* key, bool ignoreCase);
		mscorlib::System::Object* GetObject(mscorlib::System::String* key);
		mscorlib::System::Object* GetObject(mscorlib::System::String* key, bool ignoreCase);
		mscorlib::System::Object* GetObject(mscorlib::System::String* key, bool ignoreCase, bool isString);
		mscorlib::System::Object* ResolveResourceLocator(mscorlib::System::Resources::ResourceLocator resLocation, mscorlib::System::String* key, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Resources::ResourceLocator>* copyOfCache, bool keyInWrongCase);
	};
}

