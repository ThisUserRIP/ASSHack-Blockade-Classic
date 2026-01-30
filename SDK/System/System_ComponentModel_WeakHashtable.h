#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Collections_Hashtable.h"
namespace mscorlib::System::Collections { struct IEqualityComparer; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace System::System::ComponentModel
{
	struct WeakHashtable : mscorlib::System::Collections::Hashtable
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int64_t _lastGlobalMem;
		int32_t _lastHashCount;
		struct StaticFields
		{
			mscorlib::System::Collections::IEqualityComparer* _comparer;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void Clear();
		void Remove(mscorlib::System::Object* key);
		void SetWeak(mscorlib::System::Object* key, mscorlib::System::Object* value);
		void ScavengeKeys();
		static void _cctor();
	};
}

