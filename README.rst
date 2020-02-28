.. contents:: :local:

Description
-----------

``frn`` is a utility for streaming input to an auto-generated file.

Options
-------

    -e, --extension TYPE  [Required] Set file extension.
    -h, --help            Show help information.
    -v, --version         Show version number.

Examples
--------

Send piped HTML input to .html file.

.. code-block:: sh

    echo "<!doctype html><html></html>" | frn -e html -

Send Makefile input to .txt file.

.. code-block:: sh

    frn -e txt < Makefile

See Also
--------

* `rand(3) <https://linux.die.net/man/3/rand>`_
* `rename(2) <https://linux.die.net/man/2/rename>`_
