/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* BattleModel_DestroyResourceBase from https://github.com/aricloverEXTRA/PartnersInTimeDECOMP
 * src/game/model_resource_controls.cpp (license: none), reused by tools/donor_match.py */
extern "C" {
typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef s32 fx32;
typedef struct GameGraphicsResource {
    union {
        u16 raw;
        struct {
            u16 reserved0 : 4, alternate_boundary : 3, normal_boundary : 3, texture_format : 3, reserved13 : 1, color256 : 1,
                reserved15 : 1;
        } bits;
    } flags;
    u16 extra_count;
    union {
        u8 reserved04[8];
        struct {
            u32 normal_tile_counts, alternate_tile_counts;
        };
    };
    u16 animation_count, frame_count, group_count, object_count;
    union {
        u8 reserved14[4];
        struct {
            u16 texture_offset_layouts, unknown_16;
        };
    };
} GameGraphicsResource;
typedef struct GameGraphicsRange {
    u16 first, end;
} GameGraphicsRange;
typedef struct GameGraphicsObject {
    u16 attributes0 : 14, shape : 2;
    u16 attributes1 : 14, size : 2;
    u16 image;
    u16 reserved[3];
} GameGraphicsObject;
}
extern "C" {
typedef union GameSpriteFlags {
    u8 raw;
    struct {
        u8 screen : 2;
        u8 shared : 1;
        u8 dirty : 1;
        u8 buffered : 1;
        u8 linked : 1;
        u8 reserved : 2;
    } bits;
} GameSpriteFlags;
typedef struct GameSpritePalette GameSpritePalette;
struct GameSpritePalette {
    GameSpritePalette *previous, *next;
    const void *data;
    u32 resource;
    u8 first, bank, count;
    GameSpriteFlags flags;
};
typedef struct GameSpriteAllocation GameSpriteAllocation;
struct GameSpriteAllocation {
    u32 offset, size;
    GameSpriteAllocation *previous, *next;
    u32 resource;
    union {
        u32 state;
        struct {
            GameSpriteFlags flags;
            u8 end, reserved[2];
        };
    };
};
}
struct BattleModel;
struct GameGraphicsResource;
typedef struct BattleObjectTextureSet BattleObjectTextureSet;
typedef struct BattleSceneResource {
    u8 *data;
    void *component_04;
    void *component_08;
    void *component_0c;
    void *component_10;
    void *component_14;
    BattleObjectTextureSet *texture_set;
    void *stream_state;
    u16 object_data_id;
    u16 texture_variant;
    s32 resource_id;
    u32 allocation_size;
    union {
        u32 raw;
        struct {
            u32 resource_index : 27;
            u32 copy_flag : 1;
            u32 upload_complete : 1;
            u32 load_pending : 1;
            u32 processing : 1;
            u32 allocated : 1;
        } bits;
    } flags;
} BattleSceneResource;
struct BattleObjectTextureSet {
    u16 body_texture_id;
    u16 variant_index;
    u8 unknown_04[3];
    union {
        u8 raw;
        struct {
            u8 localized : 1;
            u8 unknown_01_07 : 7;
        } bits;
    } flags;
    u8 shadow_variant;
    s8 scene_property_0fc;
    s8 scene_property_0fd;
    s8 scene_property_0f8;
    s8 scene_property_0fe;
    s8 scene_property_0ff;
    s8 scene_property_0fa;
    s8 scene_property_100;
    s8 scene_property_101;
    u8 unknown_11[3];
};
typedef struct MtxFx44 {
    fx32 _00, _01, _02, _03;
    fx32 _10, _11, _12, _13;
    fx32 _20, _21, _22, _23;
    fx32 _30, _31, _32, _33;
} MtxFx44;
typedef struct GameTextureAllocation GameTextureAllocation;
struct GameTextureAllocation {
    u32 offset, size;
    GameTextureAllocation *previous, *next;
    u32 resource;
    union {
        u32 state;
        struct {
            union {
                u8 raw;
            } flags;
            u8 end, reserved[2];
        };
    };
};
typedef struct GameTexturePalette GameTexturePalette;
struct GameTexturePalette {
    u32 offset;
    GameTexturePalette *previous, *next;
    u32 resource;
    const void *data;
    u16 size;
    union {
        u16 state;
        struct {
            u8 flags, kind;
        };
    };
};
typedef struct BattleSceneObject BattleSceneObject;
typedef struct BattleMotionChannel BattleMotionChannel;
typedef struct BattleModel BattleModel;
typedef struct BattleModelVTable BattleModelVTable;
typedef struct BattleModelAnimationData BattleModelAnimationData;
typedef struct BattleSceneRenderOverride BattleSceneRenderOverride;
struct BattleSpriteTransform;
struct GameSpritePalette;
typedef void (*BattleMotionCallback)(BattleSceneObject *object, BattleMotionChannel *channel);
enum {
    BATTLE_MOTION_CHANNEL_COUNT = 4
};
struct BattleModelAnimationData {
    u16 start_frame;
    u16 end_frame;
    u32 unknown_04;
};
typedef struct BattleModelControllerWork {
    void *controller;
    const s16 *primary_components[8];
    s16 primary_steps_q8[8];
    u8 primary_state, primary_mode;
    u8 unknown_36[2];
    const s16 *primary_track;
    const s16 *layer_components[8];
    s16 layer_steps_q8[8];
    u8 layer_states[8], layer_modes[8];
    const s16 *layer_tracks[8];
    u8 layer_animation_ids[8];
    s16 initial_animation_id;
    u16 unknown_a6;
} BattleModelControllerWork;
typedef struct BattleModelFrameEntry {
    u16 unknown_00;
    union {
        u16 raw;
        struct {
            u16 offset : 9, unknown_09_15 : 7;
        } bits;
    } value;
} BattleModelFrameEntry;
struct BattleSceneRenderOverride {
    int (*render)(BattleSceneObject *object, int pass);
};
typedef union BattleSceneFlags {
    u32 raw;
    s8 shadow_delay;
    s8 pending_state;
    struct {
        u32 state : 8;
        u32 shadow_alpha : 6;
        u32 use_alternate_model : 1;
        u32 unk_15 : 1;
        u32 suppress_shadow : 1;
        u32 use_raw_position : 1;
        u32 independent_flag : 1;
        u32 stop_impact_particles : 1;
        u32 unk_20_23 : 4;
        u32 render_mode : 3;
        u32 unk_27_31 : 5;
    } bits;
} BattleSceneFlags;
struct BattleMotionChannel {
    BattleMotionCallback callback;
    s32 elapsed_q8;
    s16 duration;
    u16 has_deferred_delta;
    s16 deferred_delta_x;
    s16 deferred_delta_y;
    s16 deferred_delta_z;
    s16 frame_delta_x;
    s16 frame_delta_y;
    s16 frame_delta_z;
    s16 parameters[8];
};
struct BattleModelVTable {
    void (*prepare_render)(BattleModel *model);
    void (*unknown_004)(BattleModel *model);
    void (*draw)(BattleModel *model, void *buffer, u8 *object_count, u8 *affine_count);
    u8 unknown_00c[8];
    void (*unknown_014)(BattleModel *model);
    u8 unknown_018[0x0C];
    void (*start)(BattleModel *model);
    void (*stop)(BattleModel *model);
    u8 unknown_02c[8];
    int (*set_animation)(BattleModel *model, u8 animation_id, int argument_2);
    u8 unknown_038[4];
    int (*get_animation_id)(BattleModel *model);
    u8 unknown_040[4];
    u32 (*get_sort_key)(BattleModel *model);
    void (*unknown_048)(BattleModel *model, int enabled);
    int (*is_texture_dirty)(BattleModel *model);
    u8 unknown_050[0x18];
    int (*set_primary_animation)(BattleModel *model, u8 animation_id, int argument_2, int enabled);
    u8 unknown_06c[0x1C];
    int (*configure_animation_layer)(BattleModel *model, s8 layer, int animation_id, int enabled);
    u8 unknown_08c[4];
    int (*test_relation)(BattleModel *model, BattleModel *other);
    u8 unknown_094[8];
    void *(*get_palette_buffer)(BattleModel *model);
    void (*set_palette)(BattleModel *model, const void *source);
    const void *(*get_palette_source)(BattleModel *model);
    u8 unknown_0a8[0x20];
    struct BattleSpriteTransform *(*get_sprite_transform)(BattleModel *model);
};
struct BattleModel {
    virtual void prepare_render();
    virtual void unknown_04();
    virtual void draw(void *buffer, u8 *object_count, u8 *affine_count);
    virtual u32 get_object_size();
    virtual void unknown_10();
    virtual void unknown_14();
    virtual void unknown_18();
    virtual void unknown_1c();
    virtual void unknown_20();
    virtual void start();
    virtual void stop();
    virtual void unknown_2c();
    virtual void unknown_30();
    virtual int set_animation(u8 animation_id, int argument_2);
    virtual void unknown_38(BattleModel *source);
    virtual int get_animation_id();
    virtual int unknown_40();
    virtual u32 get_sort_key();
    virtual void unknown_48(int enabled);
    virtual int is_texture_dirty();
    virtual void set_palette_dirty(int enabled);
    virtual void unknown_54();
    virtual void unknown_58();
    virtual int restore_controller(const void *descriptor, void *controller, s16 animation);
    virtual void reset_controller_work();
    virtual int configure_controller(const void *descriptor, void *controller, s16 animation);
    virtual int set_primary_animation(u8 animation_id, int argument_2, int enabled);
    virtual void set_primary_state(u8 state);
    virtual void unknown_70();
    virtual void unknown_74();
    virtual void set_controller_animation(int animation, int reset);
    virtual void unknown_7c();
    virtual void unknown_80();
    virtual void unknown_84();
    virtual int configure_animation_layer(s8 layer, int animation_id, int enabled);
    virtual void unknown_8c();
    virtual int test_relation(BattleModel *other);
    virtual void unknown_94();
    virtual void unknown_98();
    virtual void *get_palette_buffer();
    virtual void set_palette(const void *source);
    virtual const void *get_palette_source();
    virtual void unknown_a8();
    virtual void unknown_ac();
    virtual void restore_resources(const void *descriptor);
    virtual void configure_resources(const void *descriptor);
    virtual void update_texture(const u32 *banks);
    virtual void unknown_bc();
    virtual void unknown_c0();
    virtual void unknown_c4();
    virtual struct BattleSpriteTransform *get_sprite_transform();
    BattleModel *render_previous;
    BattleModel *render_next;
    BattleSceneObject *owner;
    u8 screen;
    u8 unk_011[3];
    union {
        GameSpriteAllocation texture;
        struct {
            u8 unk_014[0x14];
            u32 property_028;
        };
    };

    union {
        u8 *property_02c;
        struct GameSpritePalette *palette;
    };
    union {
        u8 unk_030[8];
        struct {
            const void *resource_pixels;
            u32 unknown_034;
        };
    };

    union {
        const u16 *property_038;
        const GameGraphicsResource *resource;
    };
    const GameGraphicsObject *resource_objects;
    const GameGraphicsRange *resource_groups;
    const BattleModelFrameEntry *frames;
    BattleModelAnimationData *animation_data;
    const void *extra_resource_data;
    const u16 *texture_offsets;
    s16 animation_id;
    s16 property_056;
    u8 unk_058[2];
    union {
        u16 enemy_idle_frame;
        s16 effect_scale;
    };
    s16 animation_offset_x;
    s16 animation_offset_y;
    union {
        u8 unk_060[4];
        struct {
            s16 palette_index, unknown_062;
        };
    };
    s32 anchor_offset;
    s32 render_anchor_z;
    u8 unk_06c[8];
    s16 scale_x;
    s16 scale_y;
    u16 rotation_z;
    u16 unk_07a;
    union {
        u32 flags;
        struct {
            u32 unknown_00_21 : 22, alternate_resource : 1, unknown_23 : 1, unknown_24 : 1, unknown_25 : 1, unknown_26_31 : 6;
        } resource_flag_bits;
        struct {
            u32 unknown_00_01 : 2;
            u32 panel_animation_trigger : 1;
            u32 unknown_03 : 1;
            u32 render_linked : 1;
            u32 unknown_05_07 : 3;
            u32 animation_active : 1;
            u32 unknown_09 : 1;
            u32 facing_left : 1;
            u32 flip_y : 1;
            u32 animation_mode : 4;
            u32 texture_allocation_mode : 3;
            u32 unknown_19_21 : 3;
            u32 no_sort_key : 1;
            u32 unknown_23_31 : 9;
        } flag_bits;
    };
    u8 unk_080[4];
    union {
        BattleModelControllerWork controller_work;
        struct {
            void *animation_controller;
            u8 unk_088[0x70];
            s8 animation_layer_states[16];
            u8 unk_108[0x20];
            s16 initial_animation_id;
            u16 unk_12a;
        };
    };
    u8 unk_12c[4];
    GameTextureAllocation render_texture;
    GameTexturePalette render_palette;
    union {
        u8 unknown_160[2];
        struct {
            u8 texture_allocation_result, palette_allocation_result;
        };
    };
    union {
        u16 animation_state;
        struct {
            u16 state : 5;
            u16 mode : 1;
            u16 unknown_06_15 : 10;
        } animation_state_bits;
    };
    u16 owner_render_state;
    u16 unknown_166;
    const u16 *render_texture_offsets;
    u16 unknown_16c, unknown_16e;
    u32 unknown_170;
    MtxFx44 transform;
    u8 unk_1b4[4];
};
struct BattleSceneObject {
    BattleSceneObject *motion_next;
    s16 x;
    s16 y;
    s16 z;
    s16 motion_origin_x;
    s16 motion_origin_y;
    s16 motion_origin_z;
    s16 motion_target_x;
    s16 motion_target_y;
    s16 motion_target_z;
    s16 time_step_adjustment_q8;
    s16 smoothed_travel_distance;
    u16 time_paused;
    BattleMotionChannel motion_channels[BATTLE_MOTION_CHANNEL_COUNT];
    BattleSceneResource *resource;
    BattleModel *primary_model;
    BattleModel *alternate_model;
    BattleSceneRenderOverride *render_override;
    u8 unk_0cc[0x14];
    s32 loaded_resource_id;
    s16 animation_id;
    s16 previous_base_animation_id;
    s16 animation_variant_offset;
    s16 effect_anchor_z;
    u16 actor_id;
    u16 linked_actor_id;
    u16 render_state;
    u8 unk_0f2[2];
    BattleSceneFlags flags;
    s16 property_0f8;
    s16 property_0fa;
    s8 property_0fc;
    s8 property_0fd;
    s8 property_0fe;
    s8 property_0ff;
    s8 property_100;
    s8 property_101;
    union {
        s8 property_102;
        u8 removal_state_102;
    };
    union {
        s8 property_103;
        u8 removal_state_103;
    };
};
extern "C" {
extern BattleModel *func_02046190(BattleModel *model);
}
extern "C" {
extern void func_02045970(BattleModel *);
extern BattleModelVTable data_02131910;
BattleModel *func_02046190(BattleModel *model) {
    *(BattleModelVTable **) model = &data_02131910;
    model->unknown_1c();
    func_02045970(model);
    return model;
}
}
