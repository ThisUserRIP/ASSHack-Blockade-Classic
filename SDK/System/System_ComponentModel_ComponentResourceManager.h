#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Resources_ResourceManager.h"
namespace mscorlib::System::Collections { struct Hashtable; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };
namespace System::System::Collections::Generic { template <typename TKey, typename TValue> struct SortedList_2; };
namespace mscorlib::System::Resources { struct ResourceSet; };

namespace System::System::ComponentModel
{
	struct ComponentResourceManager : mscorlib::System::Resources::ResourceManager
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Hashtable* _resourceSets;
		mscorlib::System::Globalization::CultureInfo* _neutralResourcesCulture;
		void _ctor();
		void _ctor(mscorlib::System::Type* t);
		mscorlib::System::Globalization::CultureInfo* get_NeutralResourcesCulture();
		void ApplyResources(mscorlib::System::Object* value, mscorlib::System::String* objectName);
		void ApplyResources(mscorlib::System::Object* value, mscorlib::System::String* objectName, mscorlib::System::Globalization::CultureInfo* culture);
		System::Collections::Generic::SortedList_2<mscorlib::System::String, mscorlib::System::Object>* FillResources(mscorlib::System::Globalization::CultureInfo* culture, mscorlib::System::Resources::ResourceSet& resourceSet);
	};
}

