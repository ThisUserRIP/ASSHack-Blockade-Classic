#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp { struct ColumnMap_ColumnChunk; };
namespace Assembly_CSharp { template <typename T> struct List2D_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Vector3i.h"
namespace Assembly_CSharp { struct Vector3i; };
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };

namespace Assembly_CSharp
{
	struct ColumnMap : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::List2D_1<Assembly_CSharp::ColumnMap_ColumnChunk>* columns;
		void SetBuilt(int32_t x, int32_t z);
		bool IsBuilt(int32_t x, int32_t z);
		mscorlib::System::Nullable_1<Assembly_CSharp::Vector3i> GetClosestEmptyColumn(int32_t cx, int32_t cz, int32_t rad);
		Assembly_CSharp::ColumnMap_ColumnChunk* GetColumnChunk(int32_t x, int32_t z);
		void _ctor();
	};
}

