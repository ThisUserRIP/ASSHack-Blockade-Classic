#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System::Resources { struct ResourceSet; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Threading_StackCrawlMark.h"

namespace mscorlib::System::Resources
{
	struct IResourceGroveler
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Resources::ResourceSet* GrovelForResourceSet(mscorlib::System::Globalization::CultureInfo* culture, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Resources::ResourceSet>* localResourceSets, bool tryParents, bool createIfNotExists, mscorlib::System::Threading::StackCrawlMark& stackMark);
	};
}

