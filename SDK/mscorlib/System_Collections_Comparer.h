#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Globalization { struct CompareInfo; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Collections
{
	struct Comparer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Globalization::CompareInfo* m_compareInfo;
		struct StaticFields
		{
			mscorlib::System::Collections::Comparer* Default;
			mscorlib::System::Collections::Comparer* DefaultInvariant;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(mscorlib::System::Globalization::CultureInfo* culture);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		int32_t Compare(mscorlib::System::Object* a, mscorlib::System::Object* b);
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		static void _cctor();
	};
}

