# s6-scripts

- `s6-contrib`: Artix's s6-contrib (pregenerated, with a few patches, see `_patches`)

- `s6-rc` (`/etc/s6-rc`): Service definitions for [`s6-rc`](https://skarnet.org/software/s6-rc)

  - `adminsv` (`/etc/s6-rc/adminsv`): User-modifiable service directory, contains the `default` service containing the `boot` service. Can be extended with user-written services.

  - `config` (`/etc/s6-rc/config`): Per-service configuration, eg. logging, args, ...

  - `sv` (`/etc/s6-rc/sv -> /usr/share/s6-sv`, amalgamated)

    - `bundles`: Various convenience bundles that servies can depend upon

      - `boot`: Depends on `misc`, `mount`, `setup`

      - `misc`: Guarantees the following:

          * The device manager (`mdevd`) is up, and coldplug events have been processed

          * Any modules listed in `/etc/modules` have been loaded

      - `mount`: Guarantees that the following filesystems are mounted:

          * `cgroups` (`/sys/fs/cgroup` or `/sys/fs/cgroup/unified`)

          * `devtmpfs` (`/dev`)

          * `tmpfs` (`/tmp`)

          * `procfs` (`/proc`)

          * `sysfs` (`/sys`)

          * User filesystems and swap defined in `/etc/fstab`

      - `setup`: Most services would want to depend on this. Guarantees the following:

          * Cleanup actions have been performed, eg. removing `/etc/nologin`

          * Consoles have been setup according to `/etc/vconsole.conf`

          * The hostname has been setup according to `/etc/hostname`

          * The loopback device (`lo`) has been setup

          * `/dev/urandom` has been seeded with `/var/lib/random-seed`

          * `/` has been remounted rw (doesn't guarantee that `/home` or similar paths have been mounted if located on different filesystems, depend on `mount` or `mount-filesystems` for that)

          * `/dev`, `/proc` and `/sys` have been mounted

          * The `sysctl` config has been loaded

    - `core`: Core services required for a working system

      - `cleanup`

      - `coldplug`

      - `console-setup`

      - `dmesg`

      - `hostname`

      - `mdevd`

      - `modules`

      - `mount-cgroups`

      - `mount-devfs`

      - `mount-filesystems`

      - `mount-net`

      - `mount-procfs`

      - `mount-sysfs`

      - `net-lo`

      - `random-seed`

      - `remount-root`

      - `swap`

      - `sysctl`

    - `extra`: Extra services, mostly for external packages

      - `tty{1,2,3,4,5,6}`: Gettys

      - ...

# Credits

Most of the work here has been derived from Artix Linux's s6-related scripts:

- [s6-contrib](https://gitea.artixlinux.org/artix/s6-contrib)

- [s6-scripts](https://gitea.artixlinux.org/artix/s6-scripts)

- [s6-services](https://gitea.artixlinux.org/artix/s6-services)

- [s6-scripts kiss pkg by git-bruh](https://codeberg.org/git-bruh/kiss-repo/src/branch/master/repo/s6-scripts)

- [s6-scripts scripts by git-bruh](https://github.com/git-bruh/s6-scripts)

A few modifications have been made by me(rfaa) for my system.
